#include"gcd.h"
#include<stdio.h>
int gcd(int a,int b){
	int i,j=0,gcdall[j+1];
	for(i=1;i<a;i++){
		if(a%i==0){
			if(b%i==0){
				gcdall[j]=i;
				j++;
			}
		}
	}
	int GCD=gcdall[j-1];
	return GCD;
}
