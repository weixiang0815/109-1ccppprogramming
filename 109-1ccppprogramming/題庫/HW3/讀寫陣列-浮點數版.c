#include<stdio.h>
int main(){
	double num[100];
	int i=0;
	while(1){
		scanf("%lf",&num[i]);
		if(num[i]==-1){
			break;
		}
		i++;
	}
	FILE *f1=fopen("float.txt","w");
	int j;
	for(j=0;j<i;j++){
		fprintf(f1,"%.1lf ",num[j]);
	}
	fclose(f1);
	double n[i];
	FILE *f2=fopen("float.txt","r");
	for(j=0;j<i;j++){
		fscanf(f2,"%lf",&n[j]);
		printf("%.1lf ",n[j]);
	}
	fclose(f2);
	return 0;
}
