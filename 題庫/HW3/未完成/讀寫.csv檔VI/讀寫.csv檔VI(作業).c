#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
#define N 100000
void change(int *list,int n);
void show(int *list,int n,char c);
int main(){
	char n[200]="../app/score.csv",c;
	int num[3],list1[N],list2[N],list3[N],i=0,j=0,k=0,count=0;
	FILE *f=fopen(n,"r");
	fscanf(f,"%*[^\n]");
	fscanf(f,"%*c");
	while(1){
		if(feof(f)){
			break;
		}
		fscanf(f,"%c%d,%d,%d\n",&c,&num[0],&num[1],&num[2]);
		if(num[1]>=60){
			list1[i]=num[0];
			i++;
		}
		if(num[2]>=60){
			list2[j]=num[0];
			j++;
		}
		if(num[1]>=60&&num[2]<60){
			list3[k]=num[0];
			k++;
		}
		count++;
	}
	fclose(f);
	change(list1,i);
	change(list2,j);
	change(list3,k);
	show(list1,i,c);
	show(list2,j,c);
	show(list3,k,c);
	printf("%d",count);
	return 0;
}
void change(int *list,int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(list[j]>list[j+1]){
				temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
			}
		}
	}
}
void show(int *list,int n,char c){
	int i;
	printf("[");
	for(i=0;i<n;i++){
		if(i==n-1){
			printf("'%c%d']\n",c,list[i]);
		}
		else{
			printf("'%c%d', ",c,list[i]);
		}
	}
}
