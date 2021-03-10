#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char n[200]={'\0'};
	scanf("%s",n);
	FILE *f=fopen(n,"r");
	int i,k,t[2000],sum=0;
	fscanf(f,"%d\n",&k);
	for(i=0;i<k;i++){
		fscanf(f,"%d\n",&t[i]);
		if(t[i]<30){
			sum+=t[i]+5;
		}
		else if(t[i]>=30&&t[i]<=120){
			sum+=t[i]+20;
		}
	}
	fclose(f);
	printf("%d minutes\n",sum);
	return 0;
}
