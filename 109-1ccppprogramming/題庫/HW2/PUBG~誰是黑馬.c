#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*p;
	scanf("%d",&n);
	p=(int*)malloc(sizeof(int)*n);
	int i,sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
		sum+=p[i];
	}
	int avg=sum/n;
	int num=0;
	for(i=0;i<n;i++){
		if(p[i]>avg){
			num++;
		}
		else{
			continue;
		}
	}
	free(p);
	printf("%d\n",num);
	return 0;
}
