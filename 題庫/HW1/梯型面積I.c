#include <stdio.h>
int main() {
	double up,down,h,area;
	up = 10;
	down = 15;
	h = 7;
	area = (double)(up+down)*h/2;
	printf("%.1lf",area);
	return 0;
}
