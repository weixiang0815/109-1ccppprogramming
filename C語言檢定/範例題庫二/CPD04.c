#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str1[128]={'\0'}, str2[128]={'\0'};
	scanf("%[^\n]\n%[^\n]\n", str1, str2);
	int n;
	scanf("%d", &n);
	if(n>strlen(str1)){
		printf("error\n");
	}
	else{
		if(strncmp(str1, str2, n)<0){
			printf("%s < %s\n", str1, str2);
		}
		else if(strncmp(str1, str2, n)>0){
			printf("%s > %s\n", str1, str2);
		}
		else{
			printf("%s = %s\n", str1, str2);
		}
	}
	return 0;
}
