#include<stdio.h>
#include<stdlib.h>
int sum1(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum1(n));
	return 0;
}
int sum1(int n){
	int sum=(1+n)*n/2;
	return sum;
}
