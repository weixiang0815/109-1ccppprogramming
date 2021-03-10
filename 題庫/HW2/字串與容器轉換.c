#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char key[100],a[100];
	gets(key);
	int i,j=strlen(key),k=0,l;
	for(i=0;i<j;i++){
		if(key[i]==','){
			for(l=k-1;l>=0;l--){
				printf("%c",a[l]); 
			}
			printf(",");
			k*=0;
		}
		else{
			a[k]=key[i];
			k++;
		}
	}
	for(l=k-1;l>=0;l--){
		printf("%c",a[l]);
	}
	return 0;
}
