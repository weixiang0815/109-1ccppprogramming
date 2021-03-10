#include<iostream>
#include<cstring>
#include<string>
#include<memory.h>
using namespace std;
typedef struct data{
    char type[16];
    int buy;
    int sell;
}Data;
typedef class Start_a_business{
public:
	Start_a_business(){
		int i;
		for(i=0;i<10;i++){
			memset(Garage[i],'\0',16);
		}
		car=0;
		sellprice=0;
		totalcost=0;
		earn=0;
		for(i=0;i<6;i++){
			memset(carlist[i].type,'\0',16);
		}
		strcpy(carlist[0].type,"BMW");
		carlist[0].buy=8000;
		carlist[0].sell=20000;
		strcpy(carlist[1].type,"Volkswagen");
		carlist[1].buy=7000;
		carlist[1].sell=18000;
		strcpy(carlist[2].type,"Ferrari");
		carlist[2].buy=12000;
		carlist[2].sell=35000;
		strcpy(carlist[3].type,"Proton");
		carlist[3].buy=4000;
		carlist[3].sell=50000;
		strcpy(carlist[4].type,"Audi");
		carlist[4].buy=10000;
		carlist[4].sell=30000;
		strcpy(carlist[5].type,"Lamborghini");
		carlist[5].buy=15000;
		carlist[5].sell=40000;
	}
	~Start_a_business(){
		cout<<"Thank you for visiting XMing_Garage. Bye bye.\n";
	}
	void store(char x[16]){
		if(car==10){
			cout<<"Garage FULL!\nCar not stored!\n";
		}
		else{
			strcpy(Garage[car],x);
			car++;
			int i;
			for(i=0;i<6;i++){
				if(strcmp(carlist[i].type,x)==0){
					totalcost+=carlist[i].buy;
					earn-=carlist[i].buy;
					break;
				}
			}
			cout<<"Store in a car."<<endl;
			cout<<"Type: "<<x<<endl;
			cout<<"number car in garage: "<<car<<endl;
		}
	}
	void sell(char x[16]){
		int i;
		bool stored=false;
		for(i=0;i<car;i++){
			if(strcmp(Garage[i],x)==0){
				stored=true;
				break;
			}
		}
		if(stored==true){
			cout<<"You sell a car."<<endl;
			cout<<"Type: "<<x<<endl;
			cout<<"Sell price: ";
			for(i=0;i<6;i++){
				if(strcmp(x,carlist[i].type)==0){
					earn+=carlist[i].sell;
					cout<<carlist[i].sell<<endl;
					break;
				}
			}
			for(i=0;i<car;i++){
				if(strcmp(Garage[i],x)==0){
					int j;
					for(j=i;j<car;j++){
						char temp[16]={'\0'};
						int k;
						bool changed=false;
						for(k=i;k<car-1;k++){
							strcpy(temp,Garage[k]);
							memset(Garage[k],'\0',strlen(Garage[k]));
							strcpy(Garage[k],Garage[k+1]);
							memset(Garage[k+1],'\0',strlen(Garage[k+1]));
							strcpy(Garage[k+1],temp);
							changed=true;
						}
						if(changed==true){
							break;
						}
					}
					break;
				}
			}
			memset(Garage[car-1],'\0',strlen(Garage[car]));
			car--;
			cout<<"number car left in garage: "<<car<<endl;
		}
		else{
			cout<<"Car not found!\n";
		}
	}
	void displayi(){
		int i;
		for(i=0;i<car;i++){
			int j;
			for(j=0;j<6;j++){
				if(strcmp(Garage[i],carlist[j].type)==0){
					sellprice+=carlist[j].sell;
					break;
				}
			}
		}
		cout<<"Sell price= "<<sellprice<<endl;
		sellprice*=0;
	}
	void displaycost(){
		cout<<"Total cost= "<<totalcost<<endl;
	}
	void displayp(){
		cout<<"Profit= "<<earn<<endl;
	}
	void show(){
		int i;
		for(i=0;i<car;i++){
			cout<<Garage[i]<<endl;
			int j;
			for(j=0;j<6;j++){
				if(strcmp(Garage[i],carlist[j].type)==0){
					cout<<carlist[j].sell<<endl;
					break;
				}
			}
		}
	}
private:
	char Garage[10][16];
	int car;
	int sellprice;
	int totalcost;
	int earn;
	Data carlist[6];
}SaB;
int main(){
	SaB sb;
	char key,type[16]={'\0'};
	while(1){
		cin>>key;
		cin.ignore();
		if(key=='q'){
			break;
		}
		else if(key=='a'){
			cin.getline(type,16);
			sb.store(type);
			memset(type,'\0',strlen(type));
		}
		else if(key=='s'){
			cin.getline(type,16);
			sb.sell(type);
			memset(type,'\0',strlen(type));
		}
		else if(key=='c'){
			sb.displaycost();
		}
		else if(key=='i'){
			sb.displayi();
		}
		else if(key=='p'){
			sb.displayp();
		}
		else if(key=='o'){
			sb.show();
		}
	}
	return 0;
}
