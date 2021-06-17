#include<stdio.h>
#include<stdlib.h>

int main()
{
	int up,down,h;
	scanf("%d%d%d",&up,&down,&h);
	double ans=(double)((up+down)*h)/2;
	printf("%.1f\n",ans);
	return 0;
}
