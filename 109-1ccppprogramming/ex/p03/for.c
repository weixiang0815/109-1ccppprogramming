#include<stdio.h>
#include<stdlib.h>
int main(){
	int ary1[5];
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&ary1[i]);
	}
	for(i=0;i<5;i++){
		printf("%d",ary1[i]);
	}
	return 0;
}
