#include<stdio.h>
void exchange(int *a, int *b);
int main(){
	int a, b;
	printf("請輸入兩個數字<數字跟數字中間請以空白間格>");
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
