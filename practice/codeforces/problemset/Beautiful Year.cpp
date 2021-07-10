#include<iostream>
#include<string>
using namespace std;
int main(){
	int y;
	cin >> y;
	while(1){
		y++;
		string str_y = to_string(y);
		if(str_y[0]!=str_y[1] && str_y[0]!=str_y[2] && str_y[0]!=str_y[3]){
			if(str_y[1]!=str_y[2] && str_y[1]!=str_y[3]){
				if(str_y[2]!=str_y[3]){
					cout << y;
					break; 
				}
			}
		}
	}
	return 0;
}
