#include<iostream>
#include<string>
#include<cstring>
#include<memory.h>
using namespace std;
typedef struct data{
    char scientific_name[256];
    int number;
}Data;
typedef class endangeredanimals{
public:
	endangeredanimals(){
		int i;
		for(i=0;i<500;i++){
			memset(Animal_list[i].scientific_name,'\0',256);
			Animal_list[i].number=0;
		}
		type=0;
		Endanger_number=0;
	}
	~endangeredanimals(){
		cout<<"That are the endanger animal list we have now. Bye bye.\n";
	}
	void add(Data &x){
		Animal_list[type]=x;
		type++;
		cout<<"Add. Animal: "<<x.scientific_name<<".\n";
		cout<<"Number: "<<x.number<<endl;
		if(x.number<1000){
			cout<<"Endanger species: Yes\n";
		}
		else{
			cout<<"Endanger species: No\n";
		}
	}
	void update(Data &x){
		int i;
		for(i=0;i<type;i++){
			if(strcmp(Animal_list[i].scientific_name,x.scientific_name)==0){
				Animal_list[i].number=x.number;
				break;
			}
		}
		cout<<"Update. Animal: "<<x.scientific_name<<".\n";
		cout<<"Number: "<<x.number<<endl;
		if(x.number<1000){
			cout<<"Endanger species: Yes\n";
		}
		else{
			cout<<"Endanger species: No\n";
		}
	}
	void display(){
		int i;
		for(i=0;i<type;i++){
			if(Animal_list[i].number<1000){
				Endanger_number++;
			}
		}
		cout<<"There are "<<Endanger_number<<" animals who are endanger species\n";
		for(i=0;i<type;i++){
			if(Animal_list[i].number<1000){
				cout<<"Animal: "<<Animal_list[i].scientific_name<<".\n";
				cout<<"Number: "<<Animal_list[i].number<<endl;
			}
		}
		Endanger_number=0;
	}
private:
	Data Animal_list[500];
	int type;
	int Endanger_number;
}EA;
int main(){
	EA ea;
	char key;
	while(1){
		cin>>key;
		cin.ignore();
		if(key=='q'){
			break;
		}
		else if(key=='a'){
			Data x;
			cin.getline(x.scientific_name,256);
			cin>>x.number;
			ea.add(x);
		}
		else if(key=='u'){
			Data y;
			cin.getline(y.scientific_name,256);
			cin>>y.number;
			ea.update(y);
		}
		else if(key=='d'){
			ea.display();
		}
	}
	return 0;
}
