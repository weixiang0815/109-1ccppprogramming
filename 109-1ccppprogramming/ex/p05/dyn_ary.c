#include<stdio.h>
#include<stdlib.h>
#define N 5
int main(){
	int n;
	int *score;
	int i;
	printf("請輸入學生人數:");
	scanf("%d",&n);
	score=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",score+i);
	}
	for(i=0;i<n;i++){
		printf("%d ",score[i]);
	}
	puts(" ");
	free(score);
	return 0;
}
