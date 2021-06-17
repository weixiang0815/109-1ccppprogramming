#include<stdio.h>
int main(){
	int n,sum;
	scanf("%d",&n);
	int n1=n/1000,n2=(n-1000*n1)/100,n3=(n-1000*n1-100*n2)/10,n4=n-1000*n1-100*n2-10*n3;
	sum=n1+n2+n3+n4;
	printf("%d",sum);
	return 0;
}
