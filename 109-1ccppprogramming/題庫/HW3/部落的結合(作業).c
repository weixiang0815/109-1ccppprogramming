#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char n1[50]="../app/",n2[50]="../app/",key[50];
	memset(key,'\0',50);
	scanf("%s",key);
	strcat(n1,key);
	memset(key,'\0',strlen(key));
	scanf("%s",key);
	strcat(n2,key);
	FILE *f1=fopen(n1,"r"),*f2=fopen(n2,"r");
	int *num1,*num2;
	num1=(int *)malloc(sizeof(int)*100000);
	num2=(int *)malloc(sizeof(int)*100000);
	int i=0,j=0;
	fscanf(f1,"%d",&num1[i]);
	fscanf(f2,"%d",&num2[j]);
	while(1){
		if(feof(f1)&&feof(f2)==0){
			while(1){
				printf("%d ",num2[j]);
				j++;
				fscanf(f2,"%d",&num2[j]);
				if(feof(f2)){
					break;
				}
			}
			break;
		}
		else if(feof(f1)==0&&feof(f2)){
			while(1){
				printf("%d ",num1[i]);
				i++;
				fscanf(f1,"%d",&num1[i]);
				if(feof(f1)){
					break;
				}
			}
			break;
		}
		else if(feof(f1)&&feof(f2)){
			break;
		}
		else{
			if(num1[i]>num2[j]){
				printf("%d ",num2[j]);
				j++;
				fscanf(f2,"%d",&num2[j]);
			}
			else if(num1[i]<num2[j]){
				printf("%d ",num1[i]);
				i++;
				fscanf(f1,"%d",&num1[i]);
			}
			else if(num1[i]==num2[j]){
				printf("%d %d ",num1[i],num2[j]);
				i++;
				j++;
				fscanf(f1,"%d",&num1[i]);
				fscanf(f2,"%d",&num2[j]);
			}
		}
	}
	fclose(f1);
	fclose(f2);
	free(num1);
	free(num2);
	return 0;
}
