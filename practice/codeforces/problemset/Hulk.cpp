#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << "I ";
	for(int i = 1; i <= n; i++){
		if(i%2 == 0){
			cout << "love ";
		}
		else{
			cout << "hate ";
		}
		if(i == n){
			cout << "it";
		}
		else{
			cout << "that I ";
		}
	}
	return 0;
}
