#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char num[9]={'\0'};
	scanf("%s", num);
	int ans = 1;
	int n = atoi(num);
	do{
		ans *= (n%10);
		n /= 10;
	}while(n!=0);
	int i;
	for(i=0;i<strlen(num);i++){
		printf("%c", num[i]);
		if(i==strlen(num)-1){
			printf("=");
		}
		else{
			printf("*");
		}
	}
	printf("%d\n", ans);
	return 0;
}
