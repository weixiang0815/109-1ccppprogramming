#include<stdio.h>
#include<stdlib.h>
int main(){
	int a1,d,n;
	scanf("%d%d%d",&a1,&d,&n);
	int *a;
	a=(int*)malloc(sizeof(int)*n);
	a[0]=a1;
	int i,sum=a1;
	for(i=1;i<n;i++){
		a[i]=a[i-1]+d;
		sum+=a[i]; 
	}
	for(i=0;i<n;i++){
		if(i==0){
			if(a[i]<0){
				printf("(%d) ",a[i]);
			}
			else{
				printf("%d ",a[i]);
			}
		}
		else if(i>0){
			if(a[i]<0){
				printf("+ (%d) ",a[i]);
			}
			else{
				printf("+ %d ",a[i]);
			}
		}
	}
	free(a);
	printf("= %d",sum);
	return 0;
}
