#include<stdio.h>
void exchange(int *a, int *b);
int main(){
	int a, b;
	printf("�п�J��ӼƦr<�Ʀr��Ʀr�����ХH�ťն���>");
	scanf("%d%d", &a, &b);
	printf("a:%d b:%d\n", a, b);
	exchange(&a, &b);
	printf("a:%d b:%d\n", a, b);
	system("PAUSE");
	return 0;
}
void exchange(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
