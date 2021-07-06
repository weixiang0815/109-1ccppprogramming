#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin >> n;
	string *words = new string[n];
	for(int i=0; i<n; i++){
		cin >> words[i];
		if(words[i].length() > 10){
			char start = words[i].front();
			char end = words[i].back();
			string num = to_string(words[i].length()-2);
			words[i].clear();
			words[i].push_back(start);
			words[i] += num;
			words[i].push_back(end);
		}
	}
	for(int i=0; i<n; i++){
		cout << words[i] << endl;
	}
	delete [] words;
	return 0;
}
