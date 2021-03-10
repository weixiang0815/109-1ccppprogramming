#include<iostream>
#include<string>
using namespace std;
typedef class Pokemon
{
  public:
  	Pokemon(){
  		Name="name";
  		Lv=1;
  		HpCur=HpMax=1;
	  }
  	Pokemon(string name,int lv,int hp){
  		setData(name,lv,hp);
	}
	void setData(string name, int lv, int hp){
		Name=name;
		Lv=lv;
		HpCur=HpMax=hp;
	}
    void ShowInfo(){
	  cout<<"Name: "<<Name<<endl;
	  cout<<"Lv: "<<Lv<<endl;
	  cout<<"HP: "<<HpCur<<"/"<<HpMax<<"\n";
	}
    void Attack(Pokemon &Target){
	  Target.HpCur-=Lv;
	  cout<<Name<<" Attack "<<Target.Name<<" "<<Lv<<" Points.\n";
	  if(Target.HpCur<0){
	  	Target.HpCur=0;
	  }
	  if(Target.HpCur==0){
	  	cout<<Target.Name<<" Seriously Injured.\n";
	  	cout<<Name<<" Win, "<<Target.Name<<" Lose.\n";
	  	cout<<Target.Name<<" is unable to attack.\n";
	  }
	}
    void Defence(Pokemon &Target){
	  HpCur-=Target.Lv;
	  cout<<Target.Name<<" Attack "<<Name<<" "<<Target.Lv<<" Points.\n";
	  if(HpCur<0){
	  	HpCur=0;
	  }
	  if(HpCur==0){
	  	cout<<Name<<" Seriously Injured.\n";
	  	cout<<Target.Name<<" Win, "<<Name<<" Lose.\n";
	  	cout<<Name<<" is unable to attack.\n";
	  }
	}
    void Cure(){
	  HpCur=HpMax;
	}
	void battle(Pokemon &enemy,int num){
		cout<<"#"<<num<<endl;
		while(1){
			Attack(enemy);
			if(enemy.HpCur==0){
				break;
			}
			Defence(enemy);
			if(HpCur==0){
				break;
			}
		}
		enemy.ShowInfo();
		ShowInfo();
		cout<<endl;
		enemy.Cure();
	}
  private:
    string Name;
    int Lv;
    int HpMax;
    int HpCur;
}pok;
int main(){
	int n;
	cin>>n;
	pok p[n],enemy("Mewtwo",30,300);
	int i;
	for(i=0;i<n;i++){
		string name;
		int lv,hp;
		cin>>name>>lv>>hp;
		p[i].setData(name,lv,hp);
	}
	for(i=0;i<n;i++){
		p[i].battle(enemy,i+1);
	}
	return 0;
}
