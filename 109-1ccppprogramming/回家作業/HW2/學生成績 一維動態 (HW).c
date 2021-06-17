#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	scanf("%d",&i);
	int *p;
	p=(int *)malloc(sizeof(int)*i);
	int j;
	double avg;
	for(j=0;j<i;j++){
		scanf("%d",&p[j]);
		avg+=(double)(p[j])/i;
	}
	printf("avg = %.2lf\nfail:\n",avg);
	for(j=0;j<i;j++){
		if(p[j]<60){
			printf("%d: %d\n",j+1,p[j]);
		}
	}
	puts("highest:");
	int max=p[0],maxpos=1;
	for(j=1;j<i;j++){
		if(p[j]>max){
			max=p[j];
			maxpos=j+1;
		}
		else if(p[j]==max){
			continue;
		}
	}
	free(p);
	printf("%d: %d",maxpos,max);
	return 0;
}
