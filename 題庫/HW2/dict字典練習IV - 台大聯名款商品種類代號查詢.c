#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int check(char *key1,char *key2){
	int i=0,n;
	while(1){
		if(key1[i]>key2[i]){
			n=1;
			break;
		}
		else if(key1[i]<key2[i]){
			n=2;
			break;
		}
		else{
			i++;
			continue;
		}
	}
	return n;
}
int main(){
	char key[50][50]={"T","H","B"},name[50][200]={"Top","Hoodie","Backpack"},KEY[10]={'\0'};
	int i,j,num=3;
	char tempkey[50]={'\0'},tempname[50]={'\0'};
	while(1){
		gets(KEY);
		if(strcmp(KEY,"-1")==0){
			break;
		}
		else if(strcmp(KEY,"-2")==0){
			for(i=0;i<num;i++){
				int flag1=0;
				for(j=0;j<num-1;j++){
					if(check(key[j],key[j+1])==1){
						strcpy(tempkey,key[j]);
						strcpy(tempname,name[j]);
						strcpy(key[j],key[j+1]);
						strcpy(name[j],name[j+1]);
						strcpy(key[j+1],tempkey);
						strcpy(name[j+1],tempname);
						memset(tempkey,'\0',strlen(tempkey));
						memset(tempname,'\0',strlen(tempname));
						flag1++;
					}
				}
				if(flag1==0){
					break;
				}
			}
			printf("keys: [");
			for(i=0;i<num;i++){
				if(i==num-1){
					printf("'%s']\n",key[i]);
				}
				else{
					printf("'%s', ",key[i]);
				}
			}
			printf("values: [");
			for(i=0;i<num;i++){
				if(i==num-1){
					printf("'%s']\n",name[i]);
				}
				else{
					printf("'%s', ",name[i]);
				}
			}
		}
		else if(strcmp(KEY,"-3")==0){
			memset(KEY,'\0',strlen(KEY));
			gets(KEY);
			int flag2=0;
			for(i=0;i<num;i++){
				if(strcmp(key[i],KEY)==0){
					for(j=i;j<num-1;j++){
						strcpy(tempkey,key[j]);
						strcpy(tempname,name[j]);
						strcpy(key[j],key[j+1]);
						strcpy(name[j],name[j+1]);
						strcpy(key[j+1],tempkey);
						strcpy(name[j+1],tempname);
						memset(tempkey,'\0',strlen(tempkey));
						memset(tempname,'\0',strlen(tempname));
					}
					flag2++;
					memset(key[num-1],'\0',strlen(key[num-1]));
					memset(name[num-1],'\0',strlen(name[num-1]));
					num--;
					break;
				}
			}
			if(flag2==0){
				printf("key %s does not exist, cannot delete.\n",KEY);
			}
		}
		else{
			int flag3=0;
			for(i=0;i<num;i++){
				if(strcmp(key[i],KEY)==0){
					printf("%s\n",name[i]);
					flag3++;
					break;
				}
			}
			if(flag3==0){
				printf("%s does not exist. Enter a new product category:\n",KEY);
				strcpy(key[num],KEY);
				gets(name[num]);
				num++;
			}
		}
		memset(KEY,'\0',strlen(KEY));
	}
	return 0;
}
