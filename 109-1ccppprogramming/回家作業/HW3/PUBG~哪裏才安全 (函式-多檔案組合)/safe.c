#include"safe.h"
#include<stdio.h>
#include<stdlib.h>
int safe(int array[5][5])
{
    int direction,i,j,pos[2];
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		if(array[i][j]==2){
    			pos[0]=i;
    			pos[1]=j;
    			break;
			}
		}
		if(array[i][j]==2){
			break;
		}
	}
	int safeplace[4]={10000,10000,10000,10000};
	for(i=pos[0]-1;i>=0;i--){ // 1方向 
		if(array[i][pos[1]]==1){
			safeplace[0]=pos[0]-i;
			break;
		}
	}
	for(i=pos[1]+1;i<5;i++){ // 2方向 
		if(array[pos[0]][i]==1){
			safeplace[1]=i-pos[1];
			break;
		} 
	}
	for(i=pos[0];i<5;i++){ // 3方向 
		if(array[i][pos[1]]==1){
			safeplace[2]=i-pos[0];
			break;
		}
	}
	for(i=pos[1];i>=0;i--){ // 4方向 
		if(array[pos[0]][i]==1){
			safeplace[3]=pos[1]-i;
			break;
		}
	}
	int min=0;
	for(i=1;i<4;i++){
		if(safeplace[i]<safeplace[min]){
			min=i;
		}
	}
	direction=min+1;
    return direction;
}
