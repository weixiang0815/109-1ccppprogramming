#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[80];
	gets(a);
	int i=0;
	while(a[i]!='\0'){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}
		i++;
	}
	puts(a);
	return 0;
}
