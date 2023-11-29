#include<stdio.h>
int main(){
	int n,i;
	printf("Input N = ");
	scanf("%d",&n);
	for(i=n;i>=1;i=i-2){
		printf("%d ",i);
	}
return 0;
}
