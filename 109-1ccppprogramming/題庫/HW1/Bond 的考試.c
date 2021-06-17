#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,n;
	scanf("%d",&N);
	if(N%7==0){
		printf("YES\n");
		return 0;
	}
	while(N!=0){
		n=N%10;
		if(n==7){
			printf("YES\n");
			return 0;
		}
		N/=10;
		continue;
	}
	printf("NO\n");
	return 0;
}
