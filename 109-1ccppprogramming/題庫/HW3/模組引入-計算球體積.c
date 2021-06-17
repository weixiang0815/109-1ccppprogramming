#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI acos(-1)
double volume(double r);
int main(){
	double n1;
	scanf("%lf",&n1);
	printf("%.3lf",volume(n1));
	return 0;
}
double volume(double r){
	double ans=(PI*(r*r*r))*((double)4/3);
	return ans;
}
