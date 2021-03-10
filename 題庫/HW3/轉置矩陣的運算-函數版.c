#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
void matrix(int **a,int i,int j);
int main(){
	char key[30];
	memset(key,'\0',30);
	scanf("%[^\n]",key);
	scanf("%*c");
	int i,n=0;
	for(i=0;i<strlen(key);i++){
		if(key[i]==' '){
			n++;
		}
	}
	int *a[100],m;
	for(m=0;m<100;m++){
		a[m]=(int*)malloc(sizeof(int)*(n+1));
	}
	int j=0,k=0;
	char key1[30];
	for(i=0;i<strlen(key);i++){
		if(key[i]==' '){
			a[0][k]=atoi(key1);
			k++;
			memset(key1,'\0',j+1);
			j*=0;
		}
		else{
			key1[j]=key[i];
			j++;
		}
	}
	a[0][k]=atoi(key1);
	memset(key1,'\0',j+1);
	k*=0;
	j*=0;
	memset(key,'\0',strlen(key));
	int l=1;
	while(1){
		scanf("%[^\n]",key);
		scanf("%*c");
		if(strcmp(key,"q")==0){
			break;
		}
		for(i=0;i<strlen(key);i++){
			if(key[i]==' '){
				a[l][k]=atoi(key1);
				k++;
				memset(key1,'\0',j+1);
				j*=0;
			}
			else{
				key1[j]=key[i];
				j++;
			}
		}
		a[l][k]=atoi(key1);
		memset(key1,'\0',j+1);
		k*=0;
		j*=0;
		memset(key,'\0',strlen(key));
		l++;
	}
	matrix(a,l,n+1);
	for(m=0;m<l;m++){
		free(a[m]);
	}
	return 0;
}
void matrix(int **a,int i,int j){
	int k,l;
	for(k=0;k<j;k++){
		if(k==j-1){
			for(l=0;l<i;l++){
				if(l==i-1){
					printf("%d",a[l][k]);
				}
				else{
					printf("%d ",a[l][k]);
				}
			}
		}
		else{
			for(l=0;l<i;l++){
				if(l==i-1){
					printf("%d\n",a[l][k]);
				}
				else{
					printf("%d ",a[l][k]);
				}
			}
		}
	}
}
