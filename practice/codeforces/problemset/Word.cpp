#include<iostream>
#include<string>
using namespace std;
int main(){
	string key;
	cin >> key;
	int flag = 0;
	for(int i=0; i<key.length(); i++){
		if(key[i]<96){
			flag++;
		}
		else{
			flag--;
		}
	}
	for(int i=0; i<key.length(); i++){
		if(flag>0){
			if(key[i]>=96){
				key[i]-=32;
			}
		}
		else{
			if(key[i]<96){
				key[i]+=32;
			}
		}
	}
	cout << key;
	return 0;
}
