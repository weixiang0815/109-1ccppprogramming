#include<stdio.h>
void exchange(double *c, double *d);
int main(){
	double c, d;
	printf("請輸入兩個數字<數字跟數字中間請以空白間格>");
	scanf("%lf%lf", &c, &d);
	printf("c:%lf d:%lf\n", c, d);
	exchange(&c, &d);
	printf("c:%lf d:%lf\n", c, d);
	system("PAUSE");
	return 0;
}
void exchange(double *c, double *d){
	double temp = *c;
	*c = *d;
	*d = temp;
}
