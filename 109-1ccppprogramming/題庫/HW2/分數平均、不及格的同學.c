#include<stdio.h>
#include<stdlib.h>
int main(){
	int n[3],i,sum=0;
	for(i=0;i<3;i++){
		scanf("%d",&n[i]);
		sum+=n[i];
	}
	double avg=(double)sum/3;
	printf("avg = %.2lf\n",avg);
	printf("fail:\n");
	for(i=0;i<3;i++){
		if(n[i]<60){
			printf("%d: %d\n",i+1,n[i]);
		}
	}
	return 0;
}
