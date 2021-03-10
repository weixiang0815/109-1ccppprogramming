#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[80];
	while(a[0]!='-'){
		gets(a);
		if(a[0]=='-'){
			break;
		}
		int i=0;
		while(a[i]!='\0'){
			if(a[i]>='a'&&a[i]<='z'){
				a[i]-=32;
			}
			i++;
		}
		puts(a);
	}
	return 0;
}
