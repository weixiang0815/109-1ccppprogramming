#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>99999||n<1){
		printf("out of range");
		return 0;
	}
	if(n>=10000&&n<=99999){
		int a,b,c,d,e;
		a=n/10000;//萬位數
		switch(a){
			case 1:
				printf("壹萬");
				break;
			case 2:
				printf("貳萬");
				break;
			case 3:
				printf("參萬");
				break;
			case 4:
				printf("肆萬");
				break;
			case 5:
				printf("伍萬");
				break;
			case 6:
				printf("陸萬");
				break;
			case 7:
				printf("柒萬");
				break;
			case 8:
				printf("捌萬");
				break;
			case 9:
				printf("玖萬");
				break;
		}
		b=(n/1000)%10;//千位數
		switch(b){
			case 1:
				printf("壹仟");
				break;
			case 2:
				printf("貳仟");
				break;
			case 3:
				printf("參仟");
				break;
			case 4:
				printf("肆仟");
				break;
			case 5:
				printf("伍仟");
				break;
			case 6:
				printf("陸仟");
				break;
			case 7:
				printf("柒仟");
				break;
			case 8:
				printf("捌仟");
				break;
			case 9:
				printf("玖仟");
				break;
			case 0:
				break;
		}
		c=(n/100)%10;//百位數
		switch(c){
			case 1:
				printf("壹佰");
				break;
			case 2:
				printf("貳佰");
				break;
			case 3:
				printf("參佰");
				break;
			case 4:
				printf("肆佰");
				break;
			case 5:
				printf("伍佰");
				break;
			case 6:
				printf("陸佰");
				break;
			case 7:
				printf("柒佰");
				break;
			case 8:
				printf("捌佰");
				break;
			case 9:
				printf("玖佰");
				break;
			case 0:
				break;
		}
		d=(n/10)%10;//十位數
		switch(d){
			case 1:
				printf("壹拾");
				break;
			case 2:
				printf("貳拾");
				break;
			case 3:
				printf("參拾");
				break;
			case 4:
				printf("肆拾");
				break;
			case 5:
				printf("伍拾");
				break;
			case 6:
				printf("陸拾");
				break;
			case 7:
				printf("柒拾");
				break;
			case 8:
				printf("捌拾");
				break;
			case 9:
				printf("玖拾");
				break;
			case 0:
				break;
		}
		e=n%10;//個位數
		switch(e){
			case 1:
				printf("壹");
				break;
			case 2:
				printf("貳");
				break;
			case 3:
				printf("參");
				break;
			case 4:
				printf("肆");
				break;
			case 5:
				printf("伍");
				break;
			case 6:
				printf("陸");
				break;
			case 7:
				printf("柒");
				break;
			case 8:
				printf("捌");
				break;
			case 9:
				printf("玖");
				break;
			case 0:
				break;
		}
	}
	if(n>=1000&&n<=9999){
		int b,c,d,e;
		b=(n/1000)%10;//千位數
		switch(b){
			case 1:
				printf("壹仟");
				break;
			case 2:
				printf("貳仟");
				break;
			case 3:
				printf("參仟");
				break;
			case 4:
				printf("肆仟");
				break;
			case 5:
				printf("伍仟");
				break;
			case 6:
				printf("陸仟");
				break;
			case 7:
				printf("柒仟");
				break;
			case 8:
				printf("捌仟");
				break;
			case 9:
				printf("玖仟");
				break;
		}
		c=(n/100)%10;//百位數
		switch(c){
			case 1:
				printf("壹佰");
				break;
			case 2:
				printf("貳佰");
				break;
			case 3:
				printf("參佰");
				break;
			case 4:
				printf("肆佰");
				break;
			case 5:
				printf("伍佰");
				break;
			case 6:
				printf("陸佰");
				break;
			case 7:
				printf("柒佰");
				break;
			case 8:
				printf("捌佰");
				break;
			case 9:
				printf("玖佰");
				break;
			case 0:
				break;
		}
		d=(n/10)%10;//十位數
		switch(d){
			case 1:
				printf("壹拾");
				break;
			case 2:
				printf("貳拾");
				break;
			case 3:
				printf("參拾");
				break;
			case 4:
				printf("肆拾");
				break;
			case 5:
				printf("伍拾");
				break;
			case 6:
				printf("陸拾");
				break;
			case 7:
				printf("柒拾");
				break;
			case 8:
				printf("捌拾");
				break;
			case 9:
				printf("玖拾");
				break;
			case 0:
				break;
		}
		e=n%10;//個位數
		switch(e){
			case 1:
				printf("壹");
				break;
			case 2:
				printf("貳");
				break;
			case 3:
				printf("參");
				break;
			case 4:
				printf("肆");
				break;
			case 5:
				printf("伍");
				break;
			case 6:
				printf("陸");
				break;
			case 7:
				printf("柒");
				break;
			case 8:
				printf("捌");
				break;
			case 9:
				printf("玖");
				break;
			case 0:
				break;
		}
	}
	if(n>=100&&n<=999){
		int c,d,e;
		c=(n/100)%10;//百位數
		switch(c){
			case 1:
				printf("壹佰");
				break;
			case 2:
				printf("貳佰");
				break;
			case 3:
				printf("參佰");
				break;
			case 4:
				printf("肆佰");
				break;
			case 5:
				printf("伍佰");
				break;
			case 6:
				printf("陸佰");
				break;
			case 7:
				printf("柒佰");
				break;
			case 8:
				printf("捌佰");
				break;
			case 9:
				printf("玖佰");
				break;
		}
		d=(n/10)%10;//十位數
		switch(d){
			case 1:
				printf("壹拾");
				break;
			case 2:
				printf("貳拾");
				break;
			case 3:
				printf("參拾");
				break;
			case 4:
				printf("肆拾");
				break;
			case 5:
				printf("伍拾");
				break;
			case 6:
				printf("陸拾");
				break;
			case 7:
				printf("柒拾");
				break;
			case 8:
				printf("捌拾");
				break;
			case 9:
				printf("玖拾");
				break;
			case 0:
				break;
		}
		e=n%10;//個位數
		switch(e){
			case 1:
				printf("壹");
				break;
			case 2:
				printf("貳");
				break;
			case 3:
				printf("參");
				break;
			case 4:
				printf("肆");
				break;
			case 5:
				printf("伍");
				break;
			case 6:
				printf("陸");
				break;
			case 7:
				printf("柒");
				break;
			case 8:
				printf("捌");
				break;
			case 9:
				printf("玖");
				break;
			case 0:
				break;
		}
	}
	if(n>=10&&n<=99){
		int d,e;
		d=(n/10)%10;//十位數
		switch(d){
			case 1:
				printf("壹拾");
				break;
			case 2:
				printf("貳拾");
				break;
			case 3:
				printf("參拾");
				break;
			case 4:
				printf("肆拾");
				break;
			case 5:
				printf("伍拾");
				break;
			case 6:
				printf("陸拾");
				break;
			case 7:
				printf("柒拾");
				break;
			case 8:
				printf("捌拾");
				break;
			case 9:
				printf("玖拾");
				break;
		}
		e=n%10;//個位數
		switch(e){
			case 1:
				printf("壹");
				break;
			case 2:
				printf("貳");
				break;
			case 3:
				printf("參");
				break;
			case 4:
				printf("肆");
				break;
			case 5:
				printf("伍");
				break;
			case 6:
				printf("陸");
				break;
			case 7:
				printf("柒");
				break;
			case 8:
				printf("捌");
				break;
			case 9:
				printf("玖");
				break;
			case 0:
				break;
		}
	}
	if(n>=1&&n<=9){
		int e;
		e=n%10;//個位數
		switch(e){
			case 1:
				printf("壹");
				break;
			case 2:
				printf("貳");
				break;
			case 3:
				printf("參");
				break;
			case 4:
				printf("肆");
				break;
			case 5:
				printf("伍");
				break;
			case 6:
				printf("陸");
				break;
			case 7:
				printf("柒");
				break;
			case 8:
				printf("捌");
				break;
			case 9:
				printf("玖");
				break;
			case 0:
				break;
		}
	}
	printf("元整");
	return 0;
}
