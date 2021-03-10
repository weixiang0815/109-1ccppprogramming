#include<stdio.h>
#include<stdlib.h>
int main(){
	int X;
	scanf("%d",&X);
	int total=X,n=X;
	while(X>=4){
		total+=X/4;
		n=X/4;
		X%=4;
		X+=n;
		if(X==3){
			X++;
			total+=X/4;
			break;
		}
	}
	printf("%d\n",total);
	return 0;
}
