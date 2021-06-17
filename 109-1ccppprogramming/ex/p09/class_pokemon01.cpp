#include<iostream>
using namespace std;
class Pokemon{
	public:
		void Show();
		void Attack(Pokemon &target);
		void Defence(int n);
		void Cure();
		string Name;
		int Lv,HpCur,HpMax;
};
void Pokemon::Show(){
	cout<<"Name: "<<Name<<endl;
	cout<<"LV: "<<Lv<<endl;
	cout<<"HP: "<<HpCur<<"/"<<HpMax<<endl;
}
int main(){
	Pokemon p1={"¥Ö¥d¥C",10,7,10},p2={"¤p¤õÀs",15,25,25};
	p1.Show();
	p2.Show();
	return 0;
}
