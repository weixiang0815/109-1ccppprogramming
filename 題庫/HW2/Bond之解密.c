#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ans_A(char s1[],char s2[]);
int ans_B(char s1[],char s2[]);
int main(){
    char s1[11]={'\0'}, s2[11]={'\0'};
    int A=0, B=0;
    scanf("%s%s", s1, s2);
    A=ans_A(s1,s2);
    B=ans_B(s1,s2);
    printf("%dA%dB\n", A, B);
    return 0;
}
int ans_A(char s1[],char s2[]){
    int a=0,i;
    for(i=0; i<strlen(s2); i++){
        if(s1[i]==s2[i]){
            a++;
        }
    }
    return a;
}
int ans_B(char s1[],char s2[]){
    int b=0,i;
    int c[50]={0}; //記錄號碼的數量
    int d[50]={0}; //記錄檢查過的密碼 
    for(i=0;i<strlen(s1);i++){
        if(s1[i]!=s2[i]){
			c[i]++;
			d[i]++;
		}
    }
    for(i=0;i<strlen(s1);i++){
    	if(c[i]==0){
    		continue;
		}
		else{
	        int j;
	        for(j=0;j<strlen(s2);j++){
	        	if(c[j]==0){
	        		continue;
				}
				else{
					if(s1[i]==s2[j]){
						if(d[j]!=0){
							b++;
							d[j]--;
							break;
						}
					}
				}
			}
	        }
		}
    return b;
}
