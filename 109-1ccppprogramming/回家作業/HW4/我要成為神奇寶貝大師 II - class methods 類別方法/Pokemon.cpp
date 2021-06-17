#include<iostream>
#include"Pokemon.h"
using namespace std;
void Pokemon::ShowInfo(){
  cout<<"Name: "<<Name<<endl;
  cout<<"Lv: "<<Lv<<endl;
  cout<<"HP: "<<HpCur<<"/"<<HpMax<<"\n\n";
}
void Pokemon::Attack(Pokemon &Target){
  Target.HpCur-=Lv;
  cout<<Name<<" Attack "<<Target.Name<<" "<<Lv<<" Points.\n";
}
void Pokemon::Defence( int atkp ){
  HpCur-=atkp;
}
void Pokemon::Cure(){
  HpCur=HpMax;
  cout<<Name<<" has restore health.\n";
}