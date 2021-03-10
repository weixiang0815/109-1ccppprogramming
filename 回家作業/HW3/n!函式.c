#include<stdio.h>
#include<stdlib.h>
int fact(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fact(n));
	return 0;
}
int fact(int n){
	int sum=1,i;
	for(i=1;i<=n;i++){
		sum*=i;
	}
	return sum;
}
