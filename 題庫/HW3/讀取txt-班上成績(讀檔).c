#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char fn[20],noneuse[100];
	memset(fn,'\0',20);
	memset(noneuse,'\0',100);
	scanf("%s",fn);
	int i=0,id[100],reg,mid1,mid2,final;
	double total[100],sum=0;
	FILE *f1=fopen(fn,"r");
	fscanf(f1,"%s",noneuse);
	while(1){
		fscanf(f1,"%d",&id[i]);
		if(feof(f1)){
			break;
		}
		fscanf(f1,",%d,%d,%d,%d\n",&reg,&mid1,&mid2,&final);
		total[i]=(double)(reg*10+final*40+mid1*25+mid2*25)/100;
		sum+=total[i];
		i++;
	}
	fclose(f1);
	double avg=(double)sum/i;
	printf("%.0lf\n",avg);
	int j,k=0,fail[100];
	for(j=0;j<i;j++){
		if(total[j]<60){
			fail[k]=id[j];
			k++;
		}
	}
	int l,temp;
	for(j=0;j<k;j++){
		for(l=0;l<k-1;l++){
			if(fail[l]>fail[l+1]){
				temp=fail[l];
				fail[l]=fail[l+1];
				fail[l+1]=temp;
			}
		}
	}
	for(j=0;j<k;j++){
		if(j==k-1){
			printf("%d\n",fail[j]);
		}
		else{
			printf("%d ",fail[j]);
		}
	}
	return 0;
}
