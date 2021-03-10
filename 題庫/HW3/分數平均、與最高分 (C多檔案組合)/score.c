#include"score.h"
#include<stdio.h>
double Avg(int n, int *P){
	int i;
	double sum=0,avg;
	for(i=0;i<n;i++){
		sum+=P[i];
	}
	avg=sum/n;
	return avg;
}
int MaxScore(int n, int *P){
	int i,mp=0;
	for(i=0;i<n;i++){
		if(P[i]>P[mp]){
			mp=i;
		}
	}
	return mp;
}
