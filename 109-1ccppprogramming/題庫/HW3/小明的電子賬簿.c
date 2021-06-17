#include<stdio.h>
#include<stdlib.h>
#include<string.h>
double avg(int *a,int n);
int main(){
	char key[100],f[100]="../app/",name[100][100];
	int income[100],i=0,sum=0;
	scanf("%s",key);
	strcat(f,key);
	FILE *f1=fopen(f,"r");
	while(1){
		fscanf(f1,"%s",name[i]);
		fscanf(f1,"%d",&income[i]);
		sum+=income[i]; 
		i++;
		if(feof(f1)){
			break;
		}
	}
	fclose(f1);
	int j;
	for(j=0;j<i;j++){
		printf("chef %s %d\n",name[j],income[j]);
	}
	printf("Total: %d\n",sum);
	double avg=(double)sum/i;
	printf("Avg: %.2lf",avg);
	return 0;
}
