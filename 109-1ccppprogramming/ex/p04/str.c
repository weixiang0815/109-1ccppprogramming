#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	char str1[]="Hello";
	char str2[]={'H','e','l','l','o','\0'};
	char str3[6];
	char str4[100];
	str3[0]='H';
	str3[1]='e';
	str3[2]='l';
	str3[3]='l';
	str3[4]='o';
	str3[5]='\0';
	printf("str1 = %s\n",str1);
	printf("str2 = %s\n",str2);
	printf("str3 = %s\n",str3);
	scanf("%s",str4);
	printf("str4 = %s\n",str4);
	return 0;
} 
