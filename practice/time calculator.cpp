#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
	cout<<"Please enter the time in the format of \"mmss\" and end by entering \'q\':"<<endl;
	string key="";
	int minTotal=0,secTotal=0;
	while(1){
		cin >> key;
		if(key=="q"||key=="Q"){
			break;
		}
		char sec[2]={'\0'};
		sec[0]=key[2];
		sec[1]=key[3];
		int s=atoi(sec);
		char min[2]={'\0'};
		min[0]=key[0];
		min[1]=key[1];
		int m=atoi(min);
		secTotal+=s%60;
		minTotal+=m+s/60;
		key.clear();
	}
	minTotal+=secTotal/60;
	secTotal%=60;
	int hourTotal=minTotal/60;
	minTotal%=60;
	cout<<"The total time is ";
	if(hourTotal!=0){
		cout<<hourTotal<<" hr ";
	}
	cout<<minTotal<<" min "<<secTotal<<" sec";
	return 0;
}
