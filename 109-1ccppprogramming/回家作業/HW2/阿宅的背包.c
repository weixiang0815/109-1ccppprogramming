#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int N[n],i,num=0,volume=0;
	for(i=0;i<n;i++){
		scanf("%d",&N[i]);
		if(N[i]<=k){
			num++;
			volume+=N[i];
		}
	}
	printf("%d %d\n",num,volume);
	return 0;
}
