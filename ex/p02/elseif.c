#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	int score,n;
	scanf("%d",&n);
	if(n!=1&&n!=2){
		printf("roll error\n");
		return 0;
	}
	scanf("%d",&score);
	if(score<0||score>100){
		printf("score error\n");
		return 0;
	}
	if(score>=60 && n==1){
		printf("pass\n");
	}
	else if(score>=70/* && n==2*/){
		printf("pass\n");
	}
	else{
		printf("fail\n");
	}
	return 0;
}
