#include<stdio.h>
int main(){
	int i,n;
	int sum=0;
	printf("Input N= "); scanf("%d",&n);
	sum=0;
	for(i=3;i<=n;i=i+2){
		printf("%d +",i);
		sum=sum+i;
	}
	printf("\b=%d",sum);
return 0;
}
