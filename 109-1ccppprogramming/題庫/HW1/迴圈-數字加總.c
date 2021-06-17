#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char key[100];
	gets(key);
	int i,j=strlen(key),num[30],k=0,l=0;
	char n[5];
	for(i=0;i<j;i++){
		if(key[i]>='0'&&key[i]<='9'){
			n[k]=key[i];
			k++;
		}
		if(key[i]==','||key[i+1]=='\0'){
			num[l]=atoi(n);
			int z;
			for(z=0;z<5;z++){
				n[z]=0;
			}
			l++;
			k=0;
		}
	}
	int sumeven=0,sumodd=0,sumtotal=0;
	for(i=0;i<l;i++){
		sumtotal+=num[i];
		if(num[i]%2==0){
			sumeven+=num[i];
		}
		else{
			sumodd+=num[i];
		}
	}
	printf("%d\n%d\n%d",sumodd,sumeven,sumtotal);
	return 0;
}
