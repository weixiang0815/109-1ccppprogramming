#include<stdio.h>
#include<stdlib.h>
#define N 5
#include<string.h>
int main(){
	int score[N];
	int sum=0;
	double avg;
	int i;
	for(i=0;i<N;i++){
		scanf("%d",&score[i]);
	}
	for(i=0;i<N;i++){
		sum+=score[i];
	}
	avg=(double)sum/N;
	printf("sum = %d\naverage = %.2f\n",sum,avg);
	printf("fail: \n");
	for(i=0;i<N;i++){
		if(score[i]<60){
			printf("%d: %d\n",i+1,score[i]);
		}
		else{
			continue;
		}
	}
	int MaxScore=0;//�ثe�w���̰��� 
	int MaxPos=0;//�ثe�w���̰�����m 
	for(i=0;i<N;i++){
		score[i];//��e������
		//�p�G ��e������ �j�� �ثe�w���̰���
		//�N�N ��e������ ���N �ثe�w���̰���
		//���K�O�� ��e�����ƪ���m(�ثe�w���̰�������m) 
	}
	return 0;
}
