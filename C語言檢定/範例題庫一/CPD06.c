#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[] = "Apple iPone 14";
	printf("str�r�ꪺ���׬O%d\n", strlen(str));
	char pstr2[20] = "Apple", pstr1[] = " iPod";
	printf("pstr2�s��pstr1�᪺�r�ꬰ%s\n", strcat(pstr2, pstr1));
	char str3[20] = {'\0'};
	strcpy(str3, pstr1);
	printf("str3�r��p�U:%s\n", str3);
	system("PAUSE");
	return 0;
}
