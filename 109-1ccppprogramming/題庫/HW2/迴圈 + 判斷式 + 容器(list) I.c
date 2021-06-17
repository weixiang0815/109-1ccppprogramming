#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,key,sum=0,n=0;
	a=(int*)malloc(sizeof(int)*80);
	while(key!=-1){
		scanf("%d",&key);
		if(key==-1){
			break;
		}
		a[n]=key;
		n++;
	}
	int i;
	putchar('[');
	for(i=0;i<n;i++){
		if(i==0){
			printf("%d",a[i]);
		}
		else{
			printf(", %d",a[i]);
		}
	}
	printf("]\n[");
	int temp,j;
	for(j=0;j<n;j++){
		for(i=1;i<n;i++){
			if(a[i]<a[i-1]){
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		if(i==0){
			printf("%d",a[i]);
		}
		else{
			printf(", %d",a[i]);
		}
	}
	puts("]");
	for(i=0;i<n;i++){
		if(a[i]>30){
			sum+=a[i];
		}
	}
	free(a);
	printf("%d",sum);
	return 0;
}
