#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int> s;
	for(int i = 0; i < 4; i++){
		int num;
		cin >> num;
		s.insert(num);
	}
	cout << 4-s.size();
	return 0;
}
