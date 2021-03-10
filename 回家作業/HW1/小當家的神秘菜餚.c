#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,X,Y;
	scanf("%d%d%d",&N,&X,&Y);
	int i=0,a=20;
	while(i!=N){
		i++;
		if(i%2!=0){
			a+=X;
		}
		else{
			if((a-Y)<20){
				a=20;
			}
			else{
				a-=Y;
			}
		}
	}
	int I=0,A=20;
	while(I!=N){
		I++;
		if(I%2!=0){
			if((A-Y)<20){
				A=20;
			}
			else{
				A-=Y;
			}
		}
		else{
			A+=X;
		}
	}
	if(a>A){
		printf("%d",a);
	}
	else{
		printf("%d",A);
	}
	return 0;
}
