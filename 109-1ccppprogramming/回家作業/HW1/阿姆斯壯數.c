#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i=n,a=0; 
	while(i<=m){
		if(i>=0&&i<10){
			a++;
			if(a>1){
				printf(" & ");
			}
			printf("%d",i);
			i++;
			continue;
		}
		if(i>9&&i<100){
			int x=i%10,y=i/10;
			if(x*x+y*y==i){
				a++;
				if(a>1){
					printf(" & ");
				}
				printf("%d",i);
				i++;
				continue;
			}
			else{
				i++;
				continue;
			}
		}
		if(i>99&&i<1000){
			int x=i%10,y=i/10%10,z=i/100;
			if(x*x*x+y*y*y+z*z*z==i){
				a++;
				if(a>1){
					printf(" & ");
				}
				printf("%d",i);
				i++;
				continue;
			}
			else{
				i++;
				continue;
			}
		}
		if(i>999&&i<10000){
			int x=i%10,y=i/10%10,z=i/100%10,u=i/1000;
			if(x*x*x*x+y*y*y*y+z*z*z*z+u*u*u*u==i){
				a++;
				if(a>1){
					printf(" & ");
				}
				printf("%d",i);
				i++;
				continue;
			}
			else{
				i++;
				continue;
			}
		}
		if(i>9999&&i<100000){
			int x=i%10,y=i/10%10,z=i/100%10,u=i/1000%10,w=i/10000;
			if(x*x*x*x*x+y*y*y*y*y+z*z*z*z*z+u*u*u*u*u+w*w*w*w*w==i){
			 	a++;
				if(a>1){
					printf(" & ");
				}
			 	printf("%d",i);
			 	i++;
			 	continue;
			}
			else{
				i++;
				continue;
			}
		}
		if(i=100000){
			break;
		}
	}
	if(a==0){
		printf("none");
	}
	return 0;
}
