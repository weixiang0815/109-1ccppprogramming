#include<iostream>
using namespace std;
int main(){
	int w;
	cin >> w;
	if(w%2 != 0){
		cout << "NO";
	}
	else{
		bool flag = false;
		for(int i=2;i<=w/2;i+=2){
			if( (w-i)%2 == 0 ){
				flag = true;
				break;
			}
		}
		if(flag == true){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
	}
	return 0;
}
