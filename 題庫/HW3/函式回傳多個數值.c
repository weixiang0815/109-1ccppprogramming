#include<stdio.h>
#include<stdlib.h>
void return2num(int n, int *factRst, int *sumRst);
int main(){
	int n;
	scanf("%d",&n);
	int a=1,b=0;
	return2num(n,&a,&b);
	printf("%d\n%d",a,b);
	return 0;
}
void return2num(int n, int *factRst, int *sumRst){
	int i;
	for(i=1;i<=n;i++){
		*factRst*=i;
		*sumRst+=i;
	}
}
