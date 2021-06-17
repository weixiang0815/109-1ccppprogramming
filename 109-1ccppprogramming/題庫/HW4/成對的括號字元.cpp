#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void check(char *s){
	int i,flag=0,n[2][4]={0},m=strlen(s);
	int loc[1024]={0},pos=0; //{+1¡A[+2¡A(+3¡A<+4 
	for(i=0;i<m;i++){
		if(s[i]=='('){
			n[0][0]++;
			loc[pos]+=3;
			pos++;
		}
		else if(s[i]==')'){
			n[1][0]++;
			if(n[1][0]>n[0][0]){
				flag++;
			}
			else{
				if(loc[pos-1]!=3){
					flag++;
				}
				else{
					pos--;
					loc[pos]*=0;
				}
			}
		}
		else if(s[i]=='['){
			n[0][1]++;
			loc[pos]+=2;
			pos++;
		}
		else if(s[i]==']'){
			n[1][1]++;
			if(n[1][1]>n[0][1]){
				flag++;
			}
			else{
				if(loc[pos-1]!=2){
					flag++;
				}
				else{
					pos--;
					loc[pos]*=0;
				}
			}
		}
		else if(s[i]=='{'){
			n[0][2]++;
			loc[pos]++;
			pos++;
		}
		else if(s[i]=='}'){
			n[1][2]++;
			if(n[1][2]>n[0][2]){
				flag++;
			}
			else{
				if(loc[pos-1]!=1){
					flag++;
				}
				else{
					pos--;
					loc[pos]*=0;
				}
			}
		}
		else if(s[i]=='<'){
			n[0][3]++;
			loc[pos]+=4;
			pos++;
		}
		else if(s[i]=='>'){
			n[1][3]++;
			if(n[1][3]>n[0][3]){
				flag++;
			}
			else{
				if(loc[pos-1]!=4){
					flag++;
				}
				else{
					pos--;
					loc[pos]*=0;
				}
			}
		}
	}
	for(i=0;i<4;i++){
		if(n[0][i]!=n[1][i]){
			flag++;
		}
	}
	if(flag==0){
		cout<<"Y\n";
	}
	else{
		cout<<"N\n";
	}
}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	char s[n][1024]={'\0'};
	int i;
	for(i=0;i<n;i++){
		cin.getline(s[i],1024);
	}
	for(i=0;i<n;i++){
		check(s[i]);
	}
	return 0;
}
