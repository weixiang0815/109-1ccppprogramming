#include <iostream>
using namespace std;
class eCash{
public:
  eCash(){
    Money=0;
  }
  ~eCash(){
    cout<<"eCash: Thank you. Bye Bye.";
  }
  void store(int m){
    Money+=m;
    cout<<"eCash: You stored "<<m<<".\n";
  }
  void pay(int m){
    if(m>Money){
      cout<<"eCash: Insufficient balance.\n";
    }
    else{
      Money-=m;
      cout<<"eCash: You spend "<<m<<".\n";
    }
  }
  void display(){
    cout<<"eCash: You remaining "<<Money<<".\n";
  }
private:
  int Money;
};
int main(){
  eCash c;
  char key;
  int m;
  while(1){
    cin>>key;
    if(key=='q'){
      break;
    }
    switch(key){
      case 's':
        cin>>m;
        if(m>0){
          c.store(m);
        }
        else{
          cout<<"eCash: Please enter a number > 0.\n";
        }
        break;
      case 'p':
        cin>>m;
        if(m>0){
          c.pay(m);
        }
        else{
          cout<<"eCash: Please enter a number > 0.\n";
        }
        break;
      case 'd':
        c.display();
        break;
    }
  }
  return 0;
}