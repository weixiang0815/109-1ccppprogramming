#include<stdio.h>
#include<stdlib.h>
int main(){
	char str1[100];
	char str2[100];
	puts("這是我的字串1");
	puts("");
	puts("這是我的字串2");
	//gets(str1);
	scanf("%s",str1);
	fflush(stdin);
	gets(str2);
	puts(str1);
	puts(str2);
	return 0;
}
