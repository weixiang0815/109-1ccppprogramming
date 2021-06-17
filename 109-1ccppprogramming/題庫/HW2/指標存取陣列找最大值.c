#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5],i;
	int *p=a;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	int max=p[0],maxpos=1;
	for(i=1;i<5;i++){
		if(p[i]>max){
			max=p[i];
			maxpos=i+1;
		}
	}
	printf("%d: %d",maxpos,max);
	return 0;
}
