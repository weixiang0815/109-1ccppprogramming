#include<stdio.h>
#include<stdlib.h>
int main(){
	char op;
	while(1){
		puts("i: 加入資料");
		puts("l: 列出");
		puts("s: 存檔");
		puts("o: 讀檔");
		puts("q: 離開");
		scanf(" %c",&op);
		switch(op){
			case'i':
				puts("加入資料...");
				break;
			case'l':
				break;
			case's':
				break;
			case'o':
				break;
			case'q':
				return 0;
		}
		system("pause");
		system("cls");
	}
	return 0;
}
