#include<stdio.h>
#include<stdlib.h>
void Matrix_Inverse(double a[2][2]);
double round_up(double a);
int main(){
	double a[2][2];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%lf",&a[i][j]);
		}
	}
	Matrix_Inverse(a);
	return 0;
}
void Matrix_Inverse(double a[2][2]){
	double def=a[0][0]*a[1][1]-a[0][1]*a[1][0];
	if(def==0){
		printf("none");
		exit(0);
	}
	if(a[0][0]!=0&&a[1][1]!=0){
		int temp;
		temp=a[0][0];
		a[0][0]=a[1][1];
		a[1][1]=temp;
		a[0][0]/=def;
		a[1][1]/=def;
	}
	else if(a[0][0]!=0&&a[1][1]==0){
		int temp;
		temp=a[0][0];
		a[0][0]=a[1][1];
		a[1][1]=temp;
		a[1][1]/=def;
	}
	else if(a[0][0]==0&&a[1][1]!=0){
		int temp;
		temp=a[0][0];
		a[0][0]=a[1][1];
		a[1][1]=temp;
		a[0][0]/=def;
	}
	if(a[0][1]!=0){
		a[0][1]*=-1;
		a[0][1]/=def;
	}
	if(a[1][0]!=0){
		a[1][0]*=-1;
		a[1][0]/=def;
	}
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
				k=(int)(a[i][j]*100)%10;
				if(k<5){
					a[i][j]-=((double)k/100.0);
				}
				else{
					a[i][j]+=0.1-(double)k/100.0;
				}
		}
	}
	printf("%.1lf ",a[0][0]);
	printf("%.1lf\n",a[0][1]);
	printf("%.1lf ",a[1][0]);
	printf("%.1lf\n",a[1][1]);
}
