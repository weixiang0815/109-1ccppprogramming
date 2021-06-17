#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
void alignEdge(int *tri){
	int i,j,temp;
	for(i=0;i<3;i++){
		int flag=0;
		for(j=0;j<2;j++){
			if(tri[j]>tri[j+1]){
				temp=tri[j];
				tri[j]=tri[j+1];
				tri[j+1]=temp;
				flag++;
			}
		}
		if(flag==0){
			break;
		}
	}
}
void alignArray(int type[],char tri[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		int flag=0;
		for(j=0;j<n-1;j++){
			if(tri[type[j]]>tri[type[j+1]]){
				temp=type[j];
				type[j]=type[j+1];
				type[j+1]=temp;
				flag++;
			}
		}
		if(flag==0){
			break;
		}
	}
}
int main(){
	char key[100]={'\0'},key1[100]={'\0'},tri[20]={'\0'};
	int edge[20][3]={0},type[4][20]={0},i,j=0,k=0,l=0;
	while(1){
		scanf("%[^\n]",key);
		scanf("%*c");
		if(strcmp(key,"-1")==0){
			break;
		}
		tri[k]=key[0];
		for(i=2;i<strlen(key);i++){
			if(key[i]==' '){
				edge[k][l]=atoi(key1);
				l++;
				memset(key1,'\0',strlen(key1));
				j=0;
			}
			else{
				key1[j]=key[i];
				j++;
				if(i==strlen(key)-1){
					edge[k][l]=atoi(key1);
					l=0;
					memset(key1,'\0',strlen(key1));
					j=0;
				}
			}
		}
		k++; //kヘ玡à羆计 
		memset(key,'\0',strlen(key));
	}
	int m=0,n=0;
	for(i=0;i<k;i++){
		alignEdge(edge[i]);
		if(edge[i][0]+edge[i][1]<=edge[i][2]){
			type[0][j]=i;
			j++; //j獶à计 
		}
		else{
			if(edge[i][0]*edge[i][0]+edge[i][1]*edge[i][1]>edge[i][2]*edge[i][2]){
				type[1][l]=i;
				l++; //l綰àà计 
			}
			else if(edge[i][0]*edge[i][0]+edge[i][1]*edge[i][1]<edge[i][2]*edge[i][2]){
				type[2][m]=i;
				m++; //m秝àà计 
			}
			else{
				type[3][n]=i;
				n++; //nàà计 
			}
		}
	}
	alignArray(type[0],tri,j);
	alignArray(type[1],tri,l);
	alignArray(type[2],tri,m);
	alignArray(type[3],tri,n);
	printf("Not Triangle: ");
	if(j==0){
		printf("None\n");
	}
	else{
		for(i=0;i<j;i++){
			if(i==j-1){
				printf("%c\n",tri[type[0][i]]);
			}
			else{
				printf("%c,",tri[type[0][i]]);
			}
		}
	}
	printf("Acute Angle: ");
	if(l==0){
		printf("None\n");
	}
	else{
		for(i=0;i<l;i++){
			if(i==l-1){
				printf("%c\n",tri[type[1][i]]);
			}
			else{
				printf("%c,",tri[type[1][i]]);
			}
		}
	}
	printf("Obtuse Angle: ");
	if(m==0){
		printf("None\n");
	}
	else{
		for(i=0;i<m;i++){
			if(i==m-1){
				printf("%c\n",tri[type[2][i]]);
			}
			else{
				printf("%c,",tri[type[2][i]]);
			}
		}
	}
	printf("Right Angle: ");
	if(n==0){
		printf("None\n");
	}
	else{
		for(i=0;i<n;i++){
			if(i==n-1){
				printf("%c\n",tri[type[3][i]]);
			}
			else{
				printf("%c,",tri[type[3][i]]);
			}
		}
	}
	return 0;
}
