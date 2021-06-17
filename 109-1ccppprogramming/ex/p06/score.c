#include<stdio.h>
#include<stdlib.h>
void printAry(int n,int *P);
double Avg(int n,int *P);
int MaxScore(int n,int *P);
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
void printAry(int n,int *P){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",P[i]);
	}
	puts("");
}
double Avg(int n,int *P){
	int i,sum=0;
	for(i=0;i<n;i++){
		sum+=P[i];
	}
	return (double)sum/n;
}
int MaxScore(int n,int *P){
	int i,MP=0;
	for(i=0;i<n;i++){
		if(P[i]>P[MP]){
			MP=i;
		}
	}
	return MP;
}
