#include<stdio.h>
int main(){
	int n1,n2,n3;
	int sum,mul,min,max;
	double avg;
	
	scanf("%d%d%d",&n1,&n2,&n3);
	sum = n1+n2+n3;
	mul = n1*n2*n3;
	avg = (double)sum/3.0;
	
	if(n1>=n2 && n1>=n3)
		max = n1;
	else if(n2>=n1 && n2>=n3)
		max = n2;
	else if(n3>=n1 && n3>=n2)
		max = n3;
	
	if(n1<=n2 && n1<=n3)
		min = n1;
	else if(n2<=n1 && n2<=n3)
		min = n2;
	else if(n3<=n1 && n3<=n2)
		min = n3;
	
	printf("sum is %d\n",sum);
	printf("average is %.2lf\n",avg);
	printf("product is %d\n",mul);
	printf("smallest is %d\n",min);
	printf("largest is %d\n",max);
	return 0;
}
