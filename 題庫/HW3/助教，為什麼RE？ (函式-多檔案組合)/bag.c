#include "bag.h"
#include <stdio.h>
void ans(int n,int k, int *a){
    int num=0,wei=0,i;
    for(i=0;i<n;i++){
        if(a[i]<=k){
        	num++;
        	wei+=a[i];
        }
    }
    printf("%d %d\n",num,wei);
}
