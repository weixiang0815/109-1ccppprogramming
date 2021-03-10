#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,*a;
	a=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int j;
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
		for(j=0;j<a[i];j++){
			puts("");
		}
	}
	for(i=0;i<20;i++){
		printf("-");
	}
	puts("");
	return 0;
}
