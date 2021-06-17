#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<math.h>
int main(){
	int score[1000],id,i=0,sum=0;
	char n[200];
	memset(n,'\0',200);
	scanf("%s",n);
	FILE *f=fopen(n,"r");
	fscanf(f,"%*[^\n]");
	fscanf(f,"%*c");
	while(1){
		fscanf(f,"%d,%d\n",&id,&score[i]);
		score[i]=(int)(sqrt((double)score[i])*11);
		if(score[i]>100){
			score[i]=100;
		}
		sum+=score[i];
		i++;
		if(feof(f)){
			break;
		}
	}
	fclose(f);
	double avg=(double)sum/i;
	printf("%.1lf",avg);
	return 0;
}
