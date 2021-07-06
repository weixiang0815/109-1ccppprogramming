#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int a, b;
		cin >> a >> b;
		int count;
		if(a%b == 0){
			cout << "0\n";
		}
		else{
			count = b-(a%b);
			cout << count << endl;
		}
	}
	return 0;
}
