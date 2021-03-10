#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str1[80],str2[80];
	gets(str1);
	gets(str2);
	if(strcmp(str1,str2)==0){
		puts("1=2");
	}
	else if(strcmp(str1,str2)>0){
		puts("1>2");
	}
	else{
		puts("1<2");
	}
	strcat(str1,str2);
	puts(str1);
	puts(str2);
	memcpy(str2,"I love C/C++",sizeof(char)*13);
	puts(str2);
	return 0;
};
