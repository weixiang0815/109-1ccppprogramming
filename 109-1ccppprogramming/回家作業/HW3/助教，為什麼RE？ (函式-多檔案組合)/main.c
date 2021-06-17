#include <stdio.h>
#include <stdlib.h>
#include "bag.h"
int main() {
    int n,k;
    int *a;
    scanf("%d%d",&n,&k);
    a=(int*)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    ans(n,k,a);
    free(a);
    return 0;
}
