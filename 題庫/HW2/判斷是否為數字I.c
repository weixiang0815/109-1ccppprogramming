#include<stdio.h>
#include<stdlib.h>
int main(){
	char *a;
	a=(char *)malloc(sizeof(char)*4);
	gets(a);
	int i;
	for(i=0;i<4;i++){
		if(a[i]>='A'&&a[i]<='Z'){
			printf("is not a number");
			return 0;
		}
		else if(a[i]>='a'&&a[i]<='z'){
			printf("is not a number");
			return 0;
		}
	}
	printf("n=%s",a);
	free(a);
	return 0;
}
