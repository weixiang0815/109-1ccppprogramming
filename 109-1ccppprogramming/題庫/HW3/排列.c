#include<stdio.h>
#include<stdlib.h>
int P(int n,int m);
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",P(n,m));
	return 0;
}
int P(int n,int m){
	int i,sum=1;
	for(i=0;i<=m-1;i++){
		sum*=n-i;
	}
	return sum;
}
