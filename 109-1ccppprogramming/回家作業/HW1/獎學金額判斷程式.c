#include<stdio.h>
int main(){
	int score;
	scanf("%d",&score);
	if(score>=95){
		printf("獎金 2000 元");
		return 0;
	}
	else if(score>=90 && score<=94){
		printf("獎金 1000 元");
		return 0;
	}
	else if(score>=80 && score<=89){
		printf("獎金 500 元");
		return 0;
	}
	else{
		printf("獎金 0 元");
		return 0;
	}
	return 0;
}
