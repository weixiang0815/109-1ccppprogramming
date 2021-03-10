#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int passorfail(char *grade);
int main(){
	char n[200]={'\0'},category,grade[10]={'\0'};
	int credit,r=0,e=0;
	scanf("%s",n);
	FILE *f=fopen(n,"r");
	fscanf(f,"%*[^\n]");
	fscanf(f,"%*c");
	while(1){
		if(feof(f)){
			break;
		}
		fscanf(f,"%*[^,],%c,%d,%s\n",&category,&credit,grade);
		if(category=='R'){
			if(passorfail(grade)==1){
				r+=credit;
			}
		}
		else if(category=='E'){
			if(passorfail(grade)==1){
				e+=credit;
			}
		}
		memset(grade,'\0',strlen(grade));
	}
	fclose(f);
	printf("Required: %d\n",r);
	printf("Elective: %d\n",e);
	if(r>=72&&e>=28){
		printf("Y");
	}
	else{
		printf("N\n");
		if(r<72&&e>=28){
			printf("Student still needs to complete %d required credits for graduation.",72-r);
		}
		else if(r>=72&&e<28){
			printf("Student still needs to complete %d elective credits for graduation.",28-e);
		}
		else if(r<72&&e<28){
			printf("Student still needs to complete %d required credits & %d elective credits for graduation.",72-r,28-e);
		}
	}
	return 0;
}
int passorfail(char *grade){
	if(strcmp(grade,"F")==0){
		return 0;
	}
	else{
		return 1;
	}
}
