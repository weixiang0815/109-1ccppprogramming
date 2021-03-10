#include <stdio.h>
int main() {
	double up,down,h,area;
	scanf("%lf%lf%lf",&up,&down,&h);
	area = (double)(up+down)*h/2;
	printf("%.1lf",area);
	return 0;
}
