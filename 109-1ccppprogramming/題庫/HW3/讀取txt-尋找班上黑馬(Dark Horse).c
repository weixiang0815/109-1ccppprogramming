#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char *n1=(char*)malloc(sizeof(char)*2000),*n2=(char*)malloc(sizeof(char)*2000);
	char *key=(char*)malloc(sizeof(char)*2000),alphabet;
	scanf("%s",n1);
	FILE *f1=fopen(n1,"r");
	scanf("%s",n2);
	FILE *f2=fopen(n2,"r");
	int *id=(int*)malloc(sizeof(int)*2000),ID,i=0;
	double *pro=(double*)malloc(sizeof(double)*2000),mid,fin;
	fscanf(f1,"%s\n",key);
	fscanf(f2,"%s\n",key);
	while(1){
		if(feof(f1)||feof(f2)){
			break;
		}
		fscanf(f1,"%c%d,%lf\n",&alphabet,&id[i],&mid);
		fscanf(f2,"%c%d,%lf\n",&alphabet,&ID,&fin);
		pro[i]=fin-mid;
		i++;
	}
	fclose(f1);
	fclose(f2);
	int j,*black=(int*)malloc(sizeof(int)*2000);
	double max=0;
	for(j=0;j<i;j++){
		if(pro[j]>max){
			max=pro[j];
		}
	}
	int k=0;
	for(j=0;j<i;j++){
		if(pro[j]==max){
			black[k]=id[j];
			k++;
		}
	}
	int l,temp;
	for(j=0;j<k;j++){
		for(l=0;l<k-1;l++){
			if(black[l]>black[l+1]){
				temp=black[l];
				black[l]=black[l+1];
				black[l+1]=temp;
			}
		}
	}
	printf("Dark Horse:");
	for(j=0;j<k;j++){
		if(j==k-1){
			printf(" %c%d\n",alphabet,black[j]);
		}
		else{
			printf(" %c%d &",alphabet,black[j]);
		}
	}
	printf("%.1lf Points Progress",max);
	free(n1);
	free(n2);
	free(key);
	free(id);
	free(pro);
	free(black);
	return 0;
}
