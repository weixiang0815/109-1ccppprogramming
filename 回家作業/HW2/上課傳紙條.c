#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char a[10][100],b[100];
	int n=0;
	while(1){
		scanf("%s",b);
		if(strcmp(b,"-1")==0){
			break;
		}
		strcpy(a[n],b);
		memset(b,'\0',strlen(b));
		n++;
	}
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<strlen(a[i]);j++){
			if(a[i][j]>='a'&&a[i][j]<='z'){
				if(a[i][j]>='d'&&a[i][j]<='z'){
					a[i][j]-=3;
					}
				else{
					switch(a[i][j]){
						case'a':
							a[i][j]='x';
							break;
						case'b':
							a[i][j]='y';
							break;
						case'c':
							a[i][j]='z';
							break;
					}
				}
			}
			else if(a[i][j]>='A'&&a[i][j]<='Z'){
				if(a[i][j]>='D'&&a[i][j]<='Z'){
					a[i][j]+=29;
				}
				else{
					switch(a[i][j]){
						case'A':
							a[i][j]='X';
							break;
						case'B':
							a[i][j]='Y';
							break;
						case'C':
							a[i][j]='Z';
							break;
					}
				}
			}
		}
	}
	for(i=0;i<n;i++){
		if(i==n-1){
			printf("%s",a[i]);
		}
		else{
			printf("%s ",a[i]);
		}
	}
	return 0;
}
