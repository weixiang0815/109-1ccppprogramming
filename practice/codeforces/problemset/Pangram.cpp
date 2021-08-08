#include <iostream>
#include <set>
using namespace std;
int main(){
	int n;
	cin >> n;
	set<char> myset;
	for(int i = 0; i < n; i++){
		char key;
		cin >> key;
		if(key <= 'Z'){
			key += 32;
		}
		myset.insert(key);
	}
	if(myset.size() == 26){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
