#include<stdio.h>
#include<stdlib.h>
#include"score.h"
int main(){
	int n;
	scanf("%d",&n);
	int *score,i;
	score=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&score[i]);
	}
	printf("avg = %.2lf\n",Avg(n,score));
	puts("highest:");
	int k=MaxScore(n,score)+1;
	printf("%d: %d",k,score[k-1]);
	free(score);
	return 0;
}
