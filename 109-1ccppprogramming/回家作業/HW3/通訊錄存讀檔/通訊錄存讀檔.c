#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char name[50][1000]={'\0'},num[50][20]={'\0'},email[50][1000]={'\0'},key,n[200]={'\0'};
	int i=0,j;
	while(1){
		scanf("%c",&key);
		if(key=='q'){ //離開程式
			break;
		}
		switch(key){
			case'i': //可輸入姓名, 電話, email
				scanf("%s%s%s",name[i],num[i],email[i]);
				i++;
				break;
			case'l': //印出目前輸入所有人員之內容
				for(j=0;j<i;j++){
					printf("Name: %s\n",name[j]);
					printf("Phone: %s\n",num[j]);
					printf("Email: %s\n",email[j]);
				}
				break;
			case's': //輸入檔名, 將所有人員之內容存入檔案
				scanf("%s",n);
				FILE *f1=fopen(n,"w");
				fprintf(f1,"%d\n",i);
				for(j=0;j<i;j++){
					fprintf(f1,"%s\t%s\t%s\n",name[j],num[j],email[j]);
				}
				fclose(f1);
				memset(n,'\0',200);
				break;
			case'o': //輸入檔名, 將所有人員之內容從檔案讀出
				scanf("%s",n);
				FILE *f2=fopen(n,"r");
				fscanf(f2,"%d\n",&i);
				for(j=0;j<i;j++){
					fscanf(f2,"%s\t%s\t%s\n",name[j],num[j],email[j]);
				}
				fclose(f2);
				memset(n,'\0',200);
				break;
			case'c': //恢復原廠設定, 清除所有已輸入的內容 (將程式回復到如同剛開啟的狀態)
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
