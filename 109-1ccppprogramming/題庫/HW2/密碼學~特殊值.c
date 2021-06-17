#include<stdio.h>
#include<stdlib.h>
int main(){
	int N;
	scanf("%d",&N);
	int n[N],i,mid;
	for(i=0;i<N;i++){
		scanf("%d",&n[i]);
	}
	if(N%2!=0){ //N 9 mid 5
		mid=n[N/2];
	}
	else{ //N 10 mid 5+6
		if(n[N/2-1]%2==0&&n[N/2]%2==0){
			mid=(n[N/2-1]+n[N/2])/2;
		}
		else if(n[N/2-1]%2!=0&&n[N/2]%2!=0){
			mid=(n[N/2-1]+n[N/2])/2;
		}
		else{
			mid=(n[N/2-1]+n[N/2])/2+1;
		}
	}
	printf("%d\n",mid);
	return 0;
}
