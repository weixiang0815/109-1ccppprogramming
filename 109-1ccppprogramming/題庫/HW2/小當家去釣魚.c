#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,k,*a;
	scanf("%d%d",&n,&k);
	a=(int*)malloc(sizeof(int)*n);
	int i,sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>=k){
			sum+=k*(a[i]/k);
			continue;
		}
		else{
			continue;
		}
	}
	free(a);
	printf("%d\n",sum);
	return 0;
}
