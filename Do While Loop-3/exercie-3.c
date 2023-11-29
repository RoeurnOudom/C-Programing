#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	int sum=0;
	printf("Input N= "); scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++){
		printf("cos(%d) +",i);
		sum= sum+cos(i);
	}
	printf("\b=%d",sum);
return 0;
}
