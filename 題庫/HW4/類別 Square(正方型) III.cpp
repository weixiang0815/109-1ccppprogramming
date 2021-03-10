#include<iostream>
using namespace std;
class Square{
	public:
		Square(){
			len=0;
		}
		int area(){
			return len*len;
		}
		void setLen(int n){
			if(n<0){
				len=0;
			}
			else{
				len=n;
			}
		}
		int getLen(){
			return len;
		}
	private:
		int len;
};
int main(){
	int n,m;
	cin>>n>>m;
	Square s1,s2,s3;
	s1.setLen(n);
	s2.setLen(m);
	cout<<"Area = "<<s1.area()<<" cm^2"<<endl;
	cout<<"Area = "<<s2.area()<<" cm^2"<<endl;
	cout<<"Area = "<<s3.area()<<" cm^2";
	return 0;
}
