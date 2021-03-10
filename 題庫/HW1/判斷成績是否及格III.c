#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,score;
	scanf("%d",&n);
	if(n!=1&&n!=2){
		printf("role error");
		return 0;
	}
	scanf("%d",&score);
	if(score<0||score>100){
		printf("score error");
		return 0;
	}
	if(n==1){
		if(score>=60){
			printf("pass");
			return 0;
		}
		else{
			printf("fail");
			return 0;
		}
	}
	if(n==2){
		if(score>=70){
			printf("pass");
			return 0;
		}
		else{
			printf("fail");
			return 0;
		}
	}
	return 0;
}
