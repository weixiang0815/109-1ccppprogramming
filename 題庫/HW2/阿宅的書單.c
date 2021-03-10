#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *a;
	a=(char*)malloc(sizeof(char)*50);
	int pos,num=0,flag=0,i;
	scanf("%s",a);
	a[0]+=32;
	while(1){
		char *key;
		key=(char*)malloc(sizeof(char)*50);
		scanf("%s",key);
		if(strcmp(key,"q")==0){
			break;
		}
		num++;
		if(strcmp(key,a)==0){
			pos=num;
			flag++;
		}
		free(key);
	}
	free(a);
	if(flag!=0){
		printf("Yes %d",pos);
	}
	else{
		printf("No %d",num);
	}
	return 0;
}
