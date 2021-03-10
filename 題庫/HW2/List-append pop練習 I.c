#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	scanf("%d",&i);
	int j,a[i];
	for(j=i-1;j>=0;j--){
		a[j]=j+1;
		printf("data %d\n",a[j]);
	}
	printf("\n");
	for(j=0;j<i;j++){
		printf("data %d\n",a[j]);
	}
	return 0;
}
