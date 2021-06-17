#include<stdio.h>
#include<stdlib.h>

int main()
{
	double n1,n2,sum;
	scanf("%lf%lf",&n1,&n2);
	sum = n1+n2;
	printf("%.2lf + %.2lf = %.2lf",n1,n2,sum);
	return 0;
}
