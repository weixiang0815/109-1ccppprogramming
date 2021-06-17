#include<stdio.h>
#include<stdlib.h>
int sum(int n);
int main(){
	int x;
	scanf("%d",&x);
	//int result=sum(x);
	//printf("%d",result);
	printf("%d",sum(x));
	return 0;
}
int sum(int n){
	int total=0,i;
	for(i=1;i<=n;i++){
		total+=i;
	}
	return total;
}
