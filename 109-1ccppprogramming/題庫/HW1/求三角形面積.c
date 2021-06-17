#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	double a,b,c,d,e,f,A,B,C,s,ans;
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	C=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	B=sqrt((e-a)*(e-a)+(f-b)*(f-b));
	A=sqrt((e-c)*(e-c)+(f-d)*(f-d));
	s=(A+B+C)/2;
	ans=sqrt(s*(s-A)*(s-B)*(s-C));
	printf("%.2lf",ans);
	return 0;
}
