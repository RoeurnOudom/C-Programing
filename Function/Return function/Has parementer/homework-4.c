#include<stdio.h>
#include<conio.h>
 int sum1(int n){
	int i,sum=0;
	printf("1. ");
	for(i=1;i<=n;i++){
		printf("%d+",i);
		sum=sum+i;
	}
	printf("\b=%d\n",sum);
	return sum;
}
int sum2(int n){
	int i,sum=0;
	printf("2. ");
	for(i=2;i<=n;i=i+2){
		printf("%d+",i);
		sum=sum+i;
	}
	printf("\b=%d\n",sum);	
	return sum;
}
int sum3(int n){
	int i,sum=0;
	printf("3. ");
	for(i=3;i<=n;i=i+2){
	   printf("%d+",i);
	   sum=sum+i;
	}
	printf("\b=%d\n",sum);
	return sum;
}
int main(){
	int n;
	printf("1. 1+2+3+...+N\n");
	printf("2. 2+4+6+...+N\n");
	printf("3. 3+5+7+...+N\n");
	printf("Input N= "); scanf("%d",&n);
	sum1(n);
	sum2(n);
	sum3(n);
}
