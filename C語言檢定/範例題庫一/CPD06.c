#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[] = "Apple iPone 14";
	printf("str字串的長度是%d\n", strlen(str));
	char pstr2[20] = "Apple", pstr1[] = " iPod";
	printf("pstr2連結pstr1後的字串為%s\n", strcat(pstr2, pstr1));
	char str3[20] = {'\0'};
	strcpy(str3, pstr1);
	printf("str3字串如下:%s\n", str3);
	system("PAUSE");
	return 0;
}
