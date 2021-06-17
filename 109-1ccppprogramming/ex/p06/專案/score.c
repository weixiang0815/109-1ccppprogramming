#include"score.h"
#include<stdio.h>
#include<stdlib.h>
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
