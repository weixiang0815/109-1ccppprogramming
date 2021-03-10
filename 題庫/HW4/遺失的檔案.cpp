#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;
//建立一個結構
typedef struct data{
    char product_name[256];
    long long price;
    long long number_of_sold;
}Data;
 
typedef struct data2{
    char product_name[256];
    long long number;
}Data2;
 
 
class Old_Farmer_Market{
    private:
    //設變數
    Data Product_list[500];
    long long item_type;
    long long profit;
    long long total_item_sold;
    public:
    //把值初始化
    void business(){
        item_type=0;
        profit=0;
        total_item_sold=0;
        for(int i=0;i<500;i++){
            strcpy(Product_list[i].product_name,"");
            Product_list[i].price=0;
            Product_list[i].number_of_sold=0;
        }
    }
    //進行加入新產品
    void add(Data x){
        Product_list[item_type]=x;
        cout <<"Added. Product: "<<x.product_name<<".\nSell price: "<<x.price<<"\n";
        item_type++;
    }
    //更新產品
    void update(Data x){
        for(int i=0;i<item_type;i++){
            if(strcmp(x.product_name,Product_list[i].product_name)==0){
                Product_list[i].price=x.price;
                cout <<"Updated. Product: "<<x.product_name<<".\nSell Price: "<<x.price<<"\n";
                break;
            }
        }
    }
    //賣出產品
    void sell(Data2 x){
        for(int i=0;i<item_type;i++){
            if(strcmp(x.product_name,Product_list[i].product_name)==0){
                Product_list[i].number_of_sold+=x.number;
                cout <<"Sold. Product: "<<x.product_name<<".\nNumber of sold: "<<x.number<<"\n";
                profit+=x.number*Product_list[i].price;
                total_item_sold+=x.number;
                break;
            }
        }
    }
    //顯示目前賣出產品的數量和目前的總利潤
    void display(){
        for(int i=0;i<item_type;i++){
            cout <<"Product: "<<Product_list[i].product_name<<".\nTotal number of sold: "<<Product_list[i].number_of_sold<<"\n";
        }
        cout <<"Total product sold: "<<total_item_sold<<"\nProfit: "<<profit<<"\n";
    }
};
 
typedef class Old_Farmer_Market OFM;
 
int main(){
    OFM Old;
    Old.business();
    cout <<"Welcome to Old Farmer Market, what can I help you?\n";
	char ctrl;
	Data x1;
	strcpy(x1.product_name,"");
	x1.price=0;
	x1.number_of_sold=0;
	Data2 x2;
	strcpy(x2.product_name,"");
	x2.number=0;
	while(1){
	    cin>>ctrl;
	    cin.ignore();
	    if(ctrl=='q'){
	    	cout<<"Thanks for visiting Old Farmer Market. Wish you have a good day. Bye bye.\n";
	    	break;
		}
		else if(ctrl=='a'){
			cin.getline(x1.product_name,256);
			cin>>x1.price;
			Old.add(x1);
			strcpy(x1.product_name,"");
			x1.price=0;
		}
		else if(ctrl=='u'){
			cin.getline(x1.product_name,256);
			cin>>x1.price;
			Old.update(x1);
			strcpy(x1.product_name,"");
			x1.price=0;
		}
		else if(ctrl=='s'){
			cin.getline(x2.product_name,256);
			cin>>x2.number;
			Old.sell(x2);
			strcpy(x2.product_name,"");
			x2.number=0;
		}
		else if(ctrl=='d'){
			Old.display();
		}
	}
	return 0;
}
