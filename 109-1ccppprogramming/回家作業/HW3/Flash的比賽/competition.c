#include"competition.h"
#include<stdio.h>
void competition(int *a,int n){
	int i;
	for(i=0;i<=n/2-1;i++){
		int temp;
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
}
