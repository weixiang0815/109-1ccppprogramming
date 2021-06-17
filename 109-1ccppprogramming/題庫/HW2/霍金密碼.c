#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *a;
	a=(char*)malloc(sizeof(char)*1000);
	gets(a);
	int i;
	for(i=0;i<strlen(a);i++){
		switch(a[i]){
			case'7':
				a[i]='T';
				break;
			case'4':
				a[i]='A';
				break;
			case'3':
				a[i]='E';
				break;
			case'1':
				a[i]='I';
				break;
			case'5':
				a[i]='S';
				break;
			case'0':
				a[i]='O';
				break;
		}
	}
	printf("%s",a);
	free(a);
	return 0;
}
