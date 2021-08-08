#include <iostream>
#include <cstring>
#include <set>
using namespace std;
int main(){
	char *keyword = new char[1000];
	cin.getline(keyword, 1000);
	set<char> *myset = new set<char>;
	for(int i = 1; i < strlen(keyword)-1; i++){
		if(keyword[i]!=',' && keyword[i]!=' '){
			myset->insert(keyword[i]);
		}
	}
	cout << myset->size();
	delete []keyword;
	delete myset;
	return 0;
}
