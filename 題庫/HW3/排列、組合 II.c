#include<stdio.h>
#include<stdlib.h>
int P(int n,int m);
int C(int n,int m);
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d\n%d",P(n,m),C(n,m));
	return 0;
}
int P(int n,int m){
	if(m>n){
		return 0;
	}
	int i,sum=1;
	for(i=0;i<=m-1;i++){
		sum*=n-i;
	}
	return sum;
}
int C(int n,int m){
	if(m>n){
		return 0;
	}
	int i,sum=1;
	for(i=0;i<=m-1;i++){
		sum*=n-i;
	}
	for(i=1;i<=m;i++){
		sum/=i;
	}
	return sum;
}
