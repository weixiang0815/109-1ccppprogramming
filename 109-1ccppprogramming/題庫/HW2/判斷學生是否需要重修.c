#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char key[4];
	int score[12],i;
	for(i=0;i<12;i++){
		scanf("%s",key);
		if(strcmp(key,"none")==0){
			score[i]=0;
		}
		else{
			score[i]=atoi(key);
		}
		memset(key,'\0',strlen(key));
		continue;
	}
	int small1=100,small2=100,sum=0,temp;
	for(i=0;i<12;i++){
		if(score[i]>=small2){
			sum+=score[i];
		}
		else{
			sum+=small2;
			small2=score[i];
			if(small2<small1){
				temp=small1;
				small1=small2;
				small2=temp;
			}
		}
	}
	sum-=200;
	double grade=(double)sum/10;
	printf("%.lf\n",grade);
	if(grade>=59.5){
		printf("pass");
	}
	else{
		printf("fail");
	}
	return 0;
}
