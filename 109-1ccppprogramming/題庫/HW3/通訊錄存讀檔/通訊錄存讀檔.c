#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char name[50][1000]={'\0'},num[50][20]={'\0'},email[50][1000]={'\0'},key,n[200]={'\0'};
	int i=0,j;
	while(1){
		scanf("%c",&key);
		if(key=='q'){ //���}�{��
			break;
		}
		switch(key){
			case'i': //�i��J�m�W, �q��, email
				scanf("%s%s%s",name[i],num[i],email[i]);
				i++;
				break;
			case'l': //�L�X�ثe��J�Ҧ��H�������e
				for(j=0;j<i;j++){
					printf("Name: %s\n",name[j]);
					printf("Phone: %s\n",num[j]);
					printf("Email: %s\n",email[j]);
				}
				break;
			case's': //��J�ɦW, �N�Ҧ��H�������e�s�J�ɮ�
				scanf("%s",n);
				FILE *f1=fopen(n,"w");
				fprintf(f1,"%d\n",i);
				for(j=0;j<i;j++){
					fprintf(f1,"%s\t%s\t%s\n",name[j],num[j],email[j]);
				}
				fclose(f1);
				memset(n,'\0',200);
				break;
			case'o': //��J�ɦW, �N�Ҧ��H�������e�q�ɮ�Ū�X
				scanf("%s",n);
				FILE *f2=fopen(n,"r");
				fscanf(f2,"%d\n",&i);
				for(j=0;j<i;j++){
					fscanf(f2,"%s\t%s\t%s\n",name[j],num[j],email[j]);
				}
				fclose(f2);
				memset(n,'\0',200);
				break;
			case'c': //��_��t�]�w, �M���Ҧ��w��J�����e (�N�{���^�_��p�P��}�Ҫ����A)
				for(j=0;j<i;j++){
					memset(name[j],'\0',strlen(name[j]));
					memset(num[j],'\0',strlen(num[j]));
					memset(email[j],'\0',strlen(email[j]));
				}
				i*=0;
				break;
		}
	}
	return 0;
}
