#include<stdio.h>
int main(){
	char name[10];
	scanf("%s",name);
	int n1,n2;
	scanf("%d",&n1);
	FILE *f1=fopen(name,"r");
	fscanf(f1,"%d",&n2);
	fclose(f1);
	FILE *f2=fopen("wr01.txt","w");
	int i;
	for(i=1;i<=n1+n2;i++){
		fprintf(f2,"%d ",i);
	}
	fclose(f2);
	return 0;
}
