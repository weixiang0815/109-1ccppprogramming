#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char c[200]={'\0'};
	scanf("%s",c);
	FILE *f=fopen(c,"r");
	int num,sum=0,i=0;
	while(1){
		if(feof(f)){
			break;
		}
		fscanf(f,"%d\n",&num);
		sum+=num;
		i++;
	}
	fclose(f);
	double avg=(double)sum/i;
	printf("%.2lf",avg);
	return 0;
}
