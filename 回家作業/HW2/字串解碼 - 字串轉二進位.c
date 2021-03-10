#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char a[60];
	while(strcmp(a,"-1")!=0){
		gets(a);
		if(strcmp(a,"-1")==0){
			break;
		}
		int i=0;
		while(a[i]!='\0'){
			int j=6,b[7]={0};
			while(a[i]>0){
				b[j]=a[i]%2;
				j--;
				a[i]/=2;
			}
			int k;
			for(k=0;k<7;k++){
				printf("%d",b[k]);
			}
			printf(",");
			i++;
		}
		puts("");
		a[0]='\0';
	}
	return 0;
}
