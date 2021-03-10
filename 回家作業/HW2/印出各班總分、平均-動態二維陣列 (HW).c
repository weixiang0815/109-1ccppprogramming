#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int *p[m],i,j;
	for(i=0;i<m;i++){
		p[i]=(int *)malloc(sizeof(int)*n);
	}
	double *avgc,avgs=0;
	avgc=(double *)malloc(sizeof(double)*m);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&p[i][j]);
			avgc[i]+=(double)(p[i][j])/n;
			avgs+=(double)(p[i][j])/(n*m);
		}
	}
	for(i=0;i<m;i++){
		printf("class %d\n",i+1);
		for(j=0;j<n;j++){
			printf(" %d: %d\n",j+1,p[i][j]);
		}
		printf(" avg: %.2lf\n",avgc[i]);
	}
	free(avgc);
	for(i=0;i<m;i++){
		free(p[i]);
	}
	printf("avg: %.2lf",avgs);
	return 0;
}
