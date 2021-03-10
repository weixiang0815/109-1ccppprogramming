#include<iostream>
using namespace std;
class Square{
	public:
		int area(){
			return len*len;
		}
		void setLen(int n){
			if(n<0){
				cout<<"len不可小於0\n";
				n=0;
				return;
			}
			len=n;
		}
		int getLen(){
			return len;
		}
	private:
		int len;
};
int main(){
	Square s1,s2;
	s1.setLen(10);
	s2.setLen(20);
	cout<<"len: "<<s1.getLen()<<", area: "<<s1.area()<<endl;
	cout<<"len: "<<s2.getLen()<<", area: "<<s2.area()<<endl;
	return 0;
}
