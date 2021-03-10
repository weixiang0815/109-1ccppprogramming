#include "survey.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
void print_avg(char s[]){
    char filename[128]={'\0'};
    strcpy(filename,s);
    FILE* fp;
    fp = fopen(filename, "r");
    int input, k=0;
    int total=0;
    double avg;
    while(1){
    	if(feof(fp)){
    		break;
		}
		fscanf(fp, "%d\n", &input);
        total+=input;
        k++;
        //printf("%.2f %d\n", total, k);
    }
    fclose(fp);
    avg=(double)total/k;
    printf("%.2lf", avg);
}
