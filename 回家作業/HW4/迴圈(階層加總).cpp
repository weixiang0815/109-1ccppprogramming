#include<bits/stdc++.h>
#include<cstring>
#include<cstdlib>
#include<memory.h>
using namespace std;
void factorial(int n);
int product(int n);
int main(){
	int n=0;
	char key[3000]={'\0'};
	while(1){
		cin.getline(key,3000);
		bool correct=true;
		for(int i=0;i<strlen(key);i++){
			if(key[i]=='-'||key[i]=='.'){
				correct=false;
				break;
			}
			else if(key[i]>='a'&&key[i]<='z'){
				correct=false;
				break;
			}
			else if(key[i]>='A'&&key[i]<='Z'){
				correct=false;
				break;
			}
		}
		if(correct==false){
			memset(key,'\0',strlen(key));
			continue;
		}
		else{
			if(atoi(key)==0){
				memset(key,'\0',strlen(key));
				continue;
			}
			else{
				n=atoi(key);
				break;
			}
		}
	}
	factorial(n);
	return 0;
}
void factorial(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=product(i);
	}
	cout<<sum;
}
int product(int n){
	int p=1;
	for(int i=1;i<=n;i++){
		p*=i;
	}
	return p;
}
