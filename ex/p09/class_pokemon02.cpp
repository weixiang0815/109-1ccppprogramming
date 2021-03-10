#include<iostream>
using namespace std;
class Pokemon{
	public:
		void Show();
		void SetData(string na,int lv,int hpc,int hpm){
			if(hpc>hpm){
				cout<<"HpCur error"<<endl;
				return;
			}
			Name=na;
			Lv=lv;
			HpCur=hpc;
			HpMax=hpm;
		}
		void Attack(Pokemon &target);
		void Defence(int n);
		void Cure();
	private:
		string Name;
		int Lv,HpCur,HpMax;
};
void Pokemon::Show(){
	cout<<"Name: "<<Name<<endl;
	cout<<"LV: "<<Lv<<endl;
	cout<<"HP: "<<HpCur<<"/"<<HpMax<<endl;
}
int main(){
	Pokemon p1,p2;
	p1.SetData("¥Ö¥d¥C",10,15,15);
	p2.SetData("¤p¤õÀs",15,25,25);
	p1.Show();
	p2.Show();
	return 0;
}
