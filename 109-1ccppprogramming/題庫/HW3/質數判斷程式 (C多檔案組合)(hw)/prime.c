#include"prime.h"
#include<stdio.h>
int IsPrime(int num){
	int i,n=0;
	for(i=2;i<num;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
} 
