#include<stdio.h>
#include<stdlib.h>
int main(){
	char string[20] = {'\0'};
	double output;
	printf("�п�J�@�Ʀr���r��: ");
	scanf("%s", string);
	
	output = atof(string);
	printf("%s�ഫ�᪺�B�I�Ƭ�%f\n", string, output);
	system("PAUSE");
	return 0;
}
