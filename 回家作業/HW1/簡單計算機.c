#include<stdio.h>
#include<stdlib.h>
int main(){
	double a,b,ans;
	char op;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf(" %c",&op);
	switch(op){
		case'+':
			ans=a+b;
			break;
		case'-':
			ans=a-b;
			break;
		case'*':
			ans=a*b;
			break;
		case'/':
			ans=a/b;
			break;
		default:
			printf("no this option\n");
	}
	printf("%.2lf %c %.2lf = %.2lf\n",a,op,b,ans);
	return 0;
}
