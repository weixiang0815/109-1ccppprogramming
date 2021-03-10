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
	int MaxScore=0;//ヘ玡程蔼だ 
	int MaxPos=0;//ヘ玡程蔼だ竚 
	for(i=0;i<N;i++){
		score[i];//讽玡だ计
		//狦 讽玡だ计  ヘ玡程蔼だ
		//碞盢 讽玡だ计  ヘ玡程蔼だ
		//抖獽癘 讽玡だ计竚(ヘ玡程蔼だ竚) 
	}
	return 0;
}
