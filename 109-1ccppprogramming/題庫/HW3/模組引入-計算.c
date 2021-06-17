#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI acos(-1)
double ans(double n);
double result(double n);
int main(){
	double n;
	scanf("%lf",&n);
	printf("%.2lf\n%.2lf",ans(n),result(n));
	return 0;
}
double ans(double n){
	double x=sqrt(n);
	double y=x*x*x;
	return y;
}
double result(double n){
	double r=n/2;
	double area=r*r*PI;
	return area;
}
