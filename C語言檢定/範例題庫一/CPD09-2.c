#include<stdio.h>
void exchange(double *c, double *d);
int main(){
	double c, d;
	printf("�п�J��ӼƦr<�Ʀr��Ʀr�����ХH�ťն���>");
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
