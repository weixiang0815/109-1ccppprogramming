#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int faces = 0;
	string keyword = "";
	for(int i = 0; i < n; i++){
		cin >> keyword;
		switch(keyword[0]){
			case 'T':
				faces += 4;
				break;
			case 'C':
				faces += 6;
				break;
			case 'O':
				faces += 8;
				break;
			case 'D':
				faces += 12;
				break;
			case 'I':
				faces += 20;
				break;
		}
		keyword.clear();
	}
	cout << faces;
	return 0;
}
