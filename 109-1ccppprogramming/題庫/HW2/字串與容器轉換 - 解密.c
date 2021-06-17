#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char key[200];
	gets(key);
	int i,j=strlen(key);
	for(i=0;i<j;i++){
		if(key[i]==';'){
			key[i]=' ';
		}
	}
	for(i=j-1;i>=0;i--){
		printf("%c",key[i]);
	}
	return 0;
}
