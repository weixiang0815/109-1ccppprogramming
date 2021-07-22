#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char n[10]={'\0'};
	scanf("%s", n);
	int converted=0;
	int i;
	for(i=0;i<strlen(n);i++){
		if(i==strlen(n)-1){
			if(n[i]=='1'){
				converted++;
			}
		}
		else{
			if(n[i]=='1'){
				int j, sum=1;
				for(j=0;j<strlen(n)-1-i;j++){
					sum*=2;
				}
				converted+=sum;
			}
		}
	}
	printf("%d\n", converted);
	return 0;
}
