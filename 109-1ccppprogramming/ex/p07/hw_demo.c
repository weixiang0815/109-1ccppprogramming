#include<stdio.h>
#include<stdlib.h>
int main(){
	char op;
	while(1){
		puts("i: �[�J���");
		puts("l: �C�X");
		puts("s: �s��");
		puts("o: Ū��");
		puts("q: ���}");
		scanf(" %c",&op);
		switch(op){
			case'i':
				puts("�[�J���...");
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
