#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5][3]={{76,73,85},{88,84,76},{92,82,92},{82,91,85},{72,74,73}};
	int i,j,total=0;
	double avg[5];
	for(i=0;i<5;i++){
		int sum=0;
		printf("student %d\n",i+1);
		for(j=0;j<3;j++){
			printf(" %d: %d\n",j+1,a[i][j]);
			sum+=a[i][j];
		}
		avg[i]=(double)(sum)/3;
		printf(" sum: %d\n avg: %.2lf\n",sum,avg[i]);
		total+=sum;
	}
	double average=(double)(total)/15;
	printf("total: %d, avg: %.2lf\n",total,average);
	int max;
	double maxavg;
	for(i=0;i<5;i++){
		if(avg[i]>avg[i-1]){
			max=i+1;
			maxavg=avg[i];
		}
		else{
			continue;
		}
	}
	printf("highest avg: student %d: %.2lf",max,maxavg);
	return 0;
} 
