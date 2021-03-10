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
	int max;
	if(n[0]>n[1]&&n[1]>n[2]){
		max=n[0];
		i=1;
	}
	else if(n[1]>n[0]&&n[1]>n[2]){
		max=n[1];
		i=2;
	}
	else if(n[2]>n[0]&&n[2>n[1]]){
		max=n[2];
		i=3;
	}
	printf("highest:\n%d: %d",i,max);
	return 0;
}
