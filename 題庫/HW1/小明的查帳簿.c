#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,a=0,b=0,*c,i,sum=0;
	scanf("%d",&n);
	c=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&c[i]);
		sum+=c[i];
	}
	for(i=0;i<n;i++){
		if(c[i]%2!=0&&c[i]>=50){
			a+=c[i];
		}
		else if(c[i]%2==0&&c[i]>=100){
			b+=c[i];
		}
	}
	free(c);
	printf("%d\n%d\n%d",a,b,sum);
	return 0;
}
