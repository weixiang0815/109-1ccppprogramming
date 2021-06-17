#include<stdio.h>
#include<math.h>
int main(){
	double o,a,d;
	scanf("%lf",&o);
	a=sqrt(o)*10;
	d=a-o;
	printf("Original: %.2lf\nAdjusted: %.2lf(+%.lf)",o,a,d);
	return 0;
}
