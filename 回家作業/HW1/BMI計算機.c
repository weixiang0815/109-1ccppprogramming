#include<stdio.h>
int main(){
	double cm,kg,BMI;
	scanf("%lf%lf",&cm,&kg);
	double m=cm/100;
	BMI=kg/(m*m);
	printf("%.2lf\n",BMI);
	if(BMI<18.5){
		printf("Underweight");
	}
	else if(BMI>=18.5&&BMI<24){
		printf("Normal");
	}
	else if(BMI>=24&&BMI<27){
		printf("Overweight");
	}
	else if(BMI>=27&&BMI<30){
		printf("Obese Class I");
	}
	else if(BMI>=30&&BMI<35){
		printf("Obese Class II");
	}
	else{
		printf("Obese Class III");
	}
	return 0;
}
