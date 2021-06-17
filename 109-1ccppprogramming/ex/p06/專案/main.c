#include <stdio.h>
#include <stdlib.h>
#include"score.h"
int main(){
	//int score[5]={11,22,33,44,55};
	int *score,n;
	scanf("%d",&n);
	score=(int*)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",score+i);
	}
	printAry(n,score);
	printf("avg = %.2lf\n",Avg(n,score));
	int MPos=MaxScore(n,score);
	printf("%d: %d\n",MPos+1,score[MPos]);
	free(score);
	return 0;
}
