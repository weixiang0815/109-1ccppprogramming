#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *str = (char*)malloc(sizeof(char)*4096);
	scanf("%s", str);
	char *upper_str = (char*)malloc(sizeof(char)*strlen(str));
	char *lower_str = (char*)malloc(sizeof(char)*strlen(str));
	int i, u_i=0, l_i=0;
	int count=0;
	for(i=0;i<strlen(str);i++){
		if(str[i]<='Z'){
			upper_str[u_i]=str[i];
			u_i++;
			count++;
		}
		else{
			lower_str[l_i]=str[i];
			l_i++;
		}
	}
	printf("%s\n%s\n%d\n", upper_str, lower_str, count);
	free(str);
	free(upper_str);
	free(lower_str);
	return 0;
}
