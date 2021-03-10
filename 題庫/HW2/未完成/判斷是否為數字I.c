#include<stdio.h>
#include<stdlib.h>
int main(){
	char n;
	scanf("%c",&n);
	if(n>='A'&&n<='Z'){
		printf("is not a number");
	}
	else if(n>='a'&&n<='z'){
		printf("is not a number");
	}
	else{
		printf("n=%d",n);
	}
	return 0;
} 
