#include<stdio.h>
#include<stdlib.h>
int main(){
	char c;
	c=getchar();
	if(c>='0'&&c<='9'){
		printf("%c is a number.",c);
	}
	else if(c>='A'&&c<='Z'){
		printf("%c is a capital letter.",c);
	}
	else if(c>='a'&&c<='z'){
		printf("%c is a lowercase letter.\n",c);
		c-=32;
		printf("swap to capital letter %c.",c);
	}
	else{
		printf("%c is a punctuation.",c);
	}
	return 0;
} 
