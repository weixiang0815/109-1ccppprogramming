#include "decode.h"
#include <string.h>
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
    int c[50]={0}; //�O�����X���ƶq
    int d[50]={0}; //�O���ˬd�L���K�X 
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
