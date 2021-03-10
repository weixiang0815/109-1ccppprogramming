#include<stdio.h>
#include<stdlib.h>
int C(int n,int m);
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",C(n,m));
	return 0;
}
int C(int n,int m){
	int i,sum=1;
	for(i=0;i<=m-1;i++){
		sum*=n-i;
	}
	for(i=1;i<=m;i++){
		sum/=i;
	}
	return sum;
}
