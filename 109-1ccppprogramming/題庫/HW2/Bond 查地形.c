#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*a;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int highest=0,lowest=0;
	for(i=1;i<n-1;i++){
		if(a[i]>a[i-1]&&a[i]>a[i+1]){
			highest++;
		}
		else{
			continue;
		}
	}
	for(i=1;i<n-1;i++){
		if(a[i]<a[i-1]&&a[i]<a[i+1]){
			lowest++;
		}
		else{
			continue;
		}
	}
	free(a);
	printf("%d\n%d\n",highest,lowest);
	return 0;
}
