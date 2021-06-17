#include<stdio.h>
int main(){
	int n,m,ans=1;
	scanf("%d",&n);
	for(m=1;m<=n;m++){
		ans*=m;
	}
	printf("%d",ans);
	return 0;
}
