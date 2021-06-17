#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char a[4];
	while(1){
		gets(a);
		int i=0,flag=0;
		while(a[i]!='\0'){
			if(a[i]=='\0'){
				break;
			}
			if(a[i]>='0'&&a[i]<='9'){
				i++;
				flag++;
				continue;
			}
			else if(a[i]>='a'&&a[i]<='z'){
				puts("is not a number");
				strcpy(a,"");
				break;
			}
		}
		if(flag!=0){
			printf("n=%s",a);
			break;
		}
	}
	return 0;
}
