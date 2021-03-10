#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,M;
	scanf("%d%d",&N,&M);
	if(M==N){
		printf("NO\n");
		return 0;
	}
	if(M%2!=0){
		printf("NO\n");
		return 0;
	}
	int c,r;
	if((M-2*N)%2!=0){
		printf("NO\n");
		return 0;
	}
	r=(M-2*N)/2;
	if(2*(N-r)!=M-4*r){
		printf("NO\n");
		return 0;
	}
	c=N-r;
	printf("YES\n%d %d\n",c,r);
	return 0;
	}
