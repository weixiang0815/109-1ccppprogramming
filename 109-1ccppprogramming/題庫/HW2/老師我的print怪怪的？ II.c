#include<stdio.h>
#include<stdlib.h>
int main(){
	int key,n=0,*a;
	a=(int *)malloc(sizeof(int)*20);
	while(key!=-1){
		scanf("%d",&key);
		if(key==-1){
			break;
		}
		a[n]=key;
		n++;
	}
	int i,j;
	for(i=n-1;i>=0;i--){
		printf("%d\n",a[i]);
		for(j=0;j<a[i];j++){
			puts("");
		}
	}
	free(a);
	for(i=0;i<20;i++){
		printf("-");
	}
	puts("");
	return 0;
}
