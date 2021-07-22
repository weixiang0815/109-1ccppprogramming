#include<stdio.h>
#include<stdlib.h>
int main(){
	char string[20] = {'\0'};
	double output;
	printf("請輸入一數字的字串: ");
	scanf("%s", string);
	
	output = atof(string);
	printf("%s轉換後的浮點數為%f\n", string, output);
	system("PAUSE");
	return 0;
}
