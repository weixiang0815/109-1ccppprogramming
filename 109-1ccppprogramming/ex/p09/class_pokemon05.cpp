#include<iostream>
using namespace std;
class Pokemon{
	public:
		Pokemon(){
			Name="No Name";
			Lv=1;
			HpCur=0;
			HpMax=0;
			tools=new string[100];
		}
		Pokemon(string na,int lv,int hpc,int hpm){
			SetData(na,lv,hpc,hpm);
			tools=new string[100];
		}
		~Pokemon(){
			cout<<Name<<"�w�^�k�j�۵M"<<endl;
			delete []tools;
		}
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
		void Attack(Pokemon &target){
			if(HpCur<=0){
				cout<<Name<<"�L�k����"<<endl;
				return ;
			}
			if(target.HpCur<=0){
				cout<<"�ؼ�"<<"�w���h�԰��O�A���i����"<<endl;
				return ;
			}
			cout<<Name<<"����"<<target.Name<<Lv<<"�I"<<endl;
			target.Defence(Lv);
		}
		void Defence(int n){
			HpCur-=n;
			if(HpCur<=0){
				cout<<"���h�԰��O"<<endl;
				HpCur=0;
			}
		}
		void Cure(){
			cout<<Name<<"��_���d"<<endl;
			HpCur=HpMax; 
		}
	friend class PokemonCenter;
	private:
		string Name;
		int Lv,HpCur,HpMax;
		string *tools;
};
void Pokemon::Show(){
	cout<<"Name: "<<Name<<endl;
	cout<<"LV: "<<Lv<<endl;
	cout<<"HP: "<<HpCur<<"/"<<HpMax<<endl;
}
class PokemonCenter{
	public:
		PokemonCenter(string na){
			Name=na;
		}
		void cure(Pokemon &pk){
			pk.HpCur=pk.HpMax;
			cout<<pk.Name<<"�w�b "<<Name<<"���� ��_���d"<<endl;
		}
	private:
		string Name;
};
int main(){
	Pokemon p1("�֥d�C",10,15,15),p2("�p���s",15,25,25);
	PokemonCenter pc1("�x�j���d");
	p1.Attack(p2);
	p2.Attack(p1);
	pc1.cure(p1);
	pc1.cure(p2);
	p1.Show();
	p2.Show();
	return 0;
}
