#include<stdio.h>
int main(){
	int L,S,T=0;
	scanf("%d%d",&L,&S);
	while(L!=S){
		if(S>L){
			S-=2;
			T++;
			continue;
		}
		if(S<L){
			S+=5;
			T++;
			continue;
		}
		if(S<0){
			S+=5;
			T++;
			continue;
		}
	}
	printf("%d\n",T);
	return 0;
}
