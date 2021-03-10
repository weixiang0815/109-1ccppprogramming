#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 40
int main(){
	char a[N],b[N];
	int n;
	gets(a);
	gets(b);
	if(strcmp(a,b)>0){
		printf("1>2\n");
	}
	else if(strcmp(a,b)<0){
		printf("1<2\n");
	}
	else{
		printf("1==2\n");
	}
	strcat(a,b);
	printf("%s\n",a);
	n=strlen(a);
	printf("%d",n);
	return 0;
}
