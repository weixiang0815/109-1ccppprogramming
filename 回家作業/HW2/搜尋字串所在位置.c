#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char a[120],b[10];
	gets(a);
	gets(b);
	int i,j,pos[4],l=0;
	for(i=0;i<strlen(a)-strlen(b);i++){
		if(a[i]==b[0]){
			int k=0,flag=0;
			for(j=i;j<i+strlen(b);j++){
				if(a[j]!=b[k]){
					flag++;
				}
				k++;
			}
			if(flag==0){
				pos[l]=i;
				l++;
			}
		}
	}
	for(i=0;i<l;i++){
		printf("%d\n",pos[i]);
	}
	return 0;
}
