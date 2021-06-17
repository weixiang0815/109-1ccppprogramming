#include<stdio.h>
#include<stdlib.h>
int add(int n,int *nums);
int main(){
	int nums[3],i;
	for(i=0;i<3;i++){
		scanf("%d",&nums[i]);
	}
	printf("%d\n",add(3,nums));
	nums[0]='\0';
	for(i=0;i<2;i++){
		scanf("%d",&nums[i]);
	}
	printf("%d\n",add(2,nums));
	return 0;
}
int add(int n,int *nums){
	int i,sum=0;
	for(i=0;i<n;i++){
		sum+=nums[i];
	}
	return sum;
}
