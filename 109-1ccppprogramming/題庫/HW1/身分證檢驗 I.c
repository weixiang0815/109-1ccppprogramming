#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[10];
	scanf("%s",a);
	if(a[0]>='a'&&a[0]<='z'){
		a[0]-=32;
	}
	int i=1;
	while(i<10){
		if(a[i]=='\0'){
			printf("fake");
			return 0;
		}
		i++;
	}
	int b[10];
	for(i=0;i<10;i++){
		if(i==0){
			if(a[i]=='A'){
				b[i]=10;
			}
			else if(a[i]=='B'){
				b[i]=11;
			}
			else if(a[i]=='C'){
				b[i]=12;
			}
			else if(a[i]=='D'){
				b[i]=13;
			}
			else if(a[i]=='E'){
				b[i]=14;
			}
			else if(a[i]=='F'){
				b[i]=15;
			}
			else if(a[i]=='G'){
				b[i]=16;
			}
			else if(a[i]=='H'){
				b[i]=17;
			}
			else if(a[i]=='I'){
				b[i]=34;
			}
			else if(a[i]=='J'){
				b[i]=18;
			}
			else if(a[i]=='K'){
				b[i]=19;
			}
			else if(a[i]=='L'){
				b[i]=20;
			}
			else if(a[i]=='M'){
				b[i]=21;
			}
			else if(a[i]=='N'){
				b[i]=22;
			}
			else if(a[i]=='O'){
				b[i]=35;
			}
			else if(a[i]=='P'){
				b[i]=23;
			}
			else if(a[i]=='Q'){
				b[i]=24;
			}
			else if(a[i]=='R'){
				b[i]=25;
			}
			else if(a[i]=='S'){
				b[i]=26;
			}
			else if(a[i]=='T'){
				b[i]=27;
			}
			else if(a[i]=='U'){
				b[i]=28;
			}
			else if(a[i]=='V'){
				b[i]=29;
			}
			else if(a[i]=='W'){
				b[i]=32;
			}
			else if(a[i]=='X'){
				b[i]=30;
			}
			else if(a[i]=='Y'){
				b[i]=31;
			}
			else if(a[i]=='Z'){
				b[i]=33;
			}
		}
		else if(i>0){
			if(a[i]=='1'){
				b[i]=1;
			}
			else if(a[i]=='2'){
				b[i]=2;
			}
			else if(a[i]=='3'){
				b[i]=3;
			}
			else if(a[i]=='4'){
				b[i]=4;
			}
			else if(a[i]=='5'){
				b[i]=5;
			}
			else if(a[i]=='6'){
				b[i]=6;
			}
			else if(a[i]=='7'){
				b[i]=7;
			}
			else if(a[i]=='8'){
				b[i]=8;
			}
			else if(a[i]=='9'){
				b[i]=9;
			}
			else if(a[i]=='0'){
				b[i]=0;
			}
		}
	}
	int ans=b[0]/10+b[0]%10*9+b[1]*8+b[2]*7+b[3]*6+b[4]*5+b[5]*4+b[6]*3+b[7]*2+b[8]+b[9];
	if(ans%10==0){
		printf("real");
	}
	else{
		printf("fake");
	}
	return 0;
}
