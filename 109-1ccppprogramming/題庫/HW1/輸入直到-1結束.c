#include<stdio.h>
#include<stdlib.h>
int main (){
	int key,*a,n=0,sum=0;
	a=(int *)malloc(sizeof(int)*7);
	while(key!=-1){
		scanf("%d",&key);
		if(key==-1){
			break;
		}
		a[n]=key;
		sum+=a[n];
		n++;
	}
	double avg=(double)(sum)/n;
	int i,max=a[0],maxpos=1;
	for(i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
			maxpos=i+1;
		}
	}
	free(a);
	printf("%d\n%.1lf\n%d\n%d",sum,avg,max,maxpos);
	return 0;
}
