#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char** argv){
	fstream file;
	file.open("1.txt",ios::out);
	string key;
	cout<<"Please type in a string: ";
	cin>>key;
	cout<<endl;
	file.write(key.c_str(),key.length());
	file.close();
	return 0;
}
