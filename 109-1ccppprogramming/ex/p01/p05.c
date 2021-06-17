#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	printf("Hello %d C++ %d\n",num1,num2);
	
	scanf("%d",&num1);
	printf("%d\n",num1);
	
	char ch;
	double db;
	scanf(" %c",&ch);
	scanf("%lf",&db);
	printf("%c\n",ch);
	printf("%lf\n",db);
	return 0;
}
