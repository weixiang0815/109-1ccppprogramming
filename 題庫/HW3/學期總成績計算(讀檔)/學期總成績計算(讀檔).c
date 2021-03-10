#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char s[200]={'\0'};
	scanf("%s",s);
	FILE *f=fopen(s,"r");
	fscanf(f,"%*[^\n]");
	fscanf(f,"%*c");
	char c;
	int id[1000],score[4],hw,i=0,k;
	double grade[1000],exam;
	while(1){
		if(feof(f)){
			break;
		}
		int sum=0;
		fscanf(f,"%c%d,",&c,&id[i]);
		for(k=0;k<4;k++){
			fscanf(f,"%d,",&score[k]);
			sum+=score[k];
		}
		fscanf(f,"%d\n",&hw);
		exam=(double)sum/4;
		grade[i]=exam*0.7+(double)hw/40*100*0.3;
		if(grade[i]<60&&hw==40){
			grade[i]=60;
		}
		i++;
	}
	fclose(f);
	for(k=0;k<i;k++){
		printf("%c%d %.2lf\n",c,id[k],grade[k]);
	}
	return 0;
}
