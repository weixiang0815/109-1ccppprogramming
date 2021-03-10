#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI acos(-1)
double area(double n);
int main(){
	double n;
	scanf("%lf",&n);
	printf("%.3lf",area(n));
	return 0;
}
double area(double n){
	double area=PI*(n*n)*4;
	return area;
}
