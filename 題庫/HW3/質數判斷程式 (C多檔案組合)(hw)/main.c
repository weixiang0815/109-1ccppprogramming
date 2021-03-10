#include<stdio.h>
#include<stdlib.h>
#include"prime.h"
int main(){
	int n;
    scanf("%d",&n);
    if(IsPrime(n)==1)
        printf("%d is prime\n", n);
    else if(IsPrime(n)==0) 
        printf("%d is not prime\n", n);
	return 0;
}
