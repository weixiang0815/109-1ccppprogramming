#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
#define N 100
int main(){
	char a[N],b[N]={0};
	scanf("%s",a);
	while(strcmp(b,a)!=0){
		scanf("%s",b);
		if(strcmp(b,a)==0){
			printf("Correct!");
			break;
		}
		else{
			puts("Wrong Password!");
			memset(b,'\0',strlen(b));
			continue;
		}
	}
	return 0;
}
