#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char key[200],num[10];
	int height[200];
	height[0]=0;
	gets(key);
	int i,n=strlen(key),j=0,k=1;
	for(i=2;i<n;i++){
		if(key[i]=='B'){
			height[k]=0;
			k++; //height°}¦C¦³k­Ó¼Æ¦r 
			break;
		}
		else if(key[i]==' '){
			height[k]=atoi(num);
			k++;
			memset(num,'\0',strlen(num));
			j*=0;
		}
		else{
			num[j]=key[i];
			j++;
		}
	}
	int t=0;
	for(i=1;i<k;i++){
		if(height[i]>height[i-1]){
			t+=10*(height[i]-height[i-1]);
		}
		else if(height[i]<height[i-1]){
			t+=6*(height[i-1]-height[i]);
		}
		else if(height[i]==height[i-1]){
			t+=5;
		}
	}
	printf("%d",t);
	return 0;
}
