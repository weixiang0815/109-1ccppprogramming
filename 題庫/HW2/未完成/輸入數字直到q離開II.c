#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char key[10];
	int i=0,flag=0,b[11];
	double num[11],a[11];
	while(1){
		scanf("%s",key);
		if(strcmp(key,"q")==0){
			break;
		}
		int k=0,flag1=0;
		while(1){
			if(key[k]=='\0'){
				break;
			}
			if(key[k]>='a'&&key[k]<='z'){
				flag++;
			}
			else if(key[k]=='.'){
				num[i]=atof(key);
				a[i]=atof(key);
				b[i]=atoi(key);
				i++;
				flag1++;
			}
			k++;
		}
		if(flag1==0){
			num[i]=atof(key);
			a[i]=atof(key);
			b[i]=atoi(key);
			i++;
		}
		memset(key,'\0',strlen(key));
	}
	if(flag!=0){
		printf("Please Enter Numbers Only\n");
	}
	printf("[");
	int j;
	for(j=0;j<i;j++){
		if(j+1<i){
			if(a[j]>b[j]){
				printf("%lf, ",num[j]);
			}
			else{
				printf("%.lf, ",num[j]);
			}
		}
		else if(j==i-1){
			if(a[j]>b[j]){
				printf("%lf]",num[j]);
			}
			else{
				printf("%.lf]",num[j]);
			}
		}
	}
	printf("\n[");
	double num1[11],temp;
	memcpy(num1,num,sizeof(double)*i);
	int l;
	for(j=0;j<i;j++){
		for(l=1;l<i;l++){
			if(num[l]<num[l-1]){
				temp=num[l];
				num[l]=num[l-1];
				num[l-1]=temp;
			}
		}
	}
	memcpy(a,num,sizeof(double)*i);
	memset(b,'\0',i); //如何將浮點數陣列轉成整數陣列? 
	for(j=0;j<i;j++){
		b[j]=(int)num[i];
	}
	for(j=0;j<i;j++){
		if(j+1<i){
			if(a[j]>b[j]){
				printf("%lf, ",num[j]);
			}
			else{
				printf("%.lf, ",num[j]);
			}
		}
		else if(j==i-1){
			if(a[j]>b[j]){
				printf("%lf]",num[j]);
			}
			else{
				printf("%.lf]",num[j]);
			}
		}
	}
	printf("\n[");
	for(j=i-1;j>=0;j--){
		if(j>0){
			if(a[j]>b[j]){
				printf("%lf, ",num[j]);
			}
			else{
				printf("%.lf, ",num[j]);
			}
		}
		else if(j==0){
			if(a[j]>b[j]){
				printf("%lf]",num[j]);
			}
			else{
				printf("%.lf]",num[j]);
			}
		}
	}
	printf("\n[");
	memcpy(a,num1,sizeof(double)*i);
	memset(b,'\0',i);
	for(j=0;j<i;j++){
		b[j]=(int)num1[i];
	}
	for(j=0;j<i;j++){
		if(j+1<i){
			if(a[j]>b[j]){
				printf("%lf, ",num1[j]);
			}
			else{
				printf("%.lf, ",num1[j]);
			}
		}
		else if(j==i-1){
			if(a[j]>b[j]){
				printf("%lf]",num1[j]);
			}
			else{
				printf("%.lf]",num1[j]);
			}
		}
	}
	return 0;
}
