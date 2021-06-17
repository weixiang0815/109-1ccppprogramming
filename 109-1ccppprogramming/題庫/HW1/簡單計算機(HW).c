#include<stdio.h>
int main(){
	double n1,n2,sum,minus,multi,divided;
	scanf("%lf%lf",&n1,&n2);
	sum = n1+n2;
	minus = n1-n2;
	multi = n1*n2;
	divided = n1/n2;
	printf("%.2lf + %.2lf = %.2lf\n",n1,n2,sum);
	printf("%.2lf - %.2lf = %.2lf\n",n1,n2,minus);
	printf("%.2lf * %.2lf = %.2lf\n",n1,n2,multi);
	printf("%.2lf / %.2lf = %.2lf\n",n1,n2,divided);
	return 0;
}
