#include<stdio.h>
#include<conio.h>
void sum(int a,int b){
	printf("Result of A+B=%d\n",a+b);
}
int main(){
	int a,b;
	printf("Input A= "); scanf("%d",&a);
	printf("Input B= "); scanf("%d",&b);
	sum(a,b);
	return 0;
}
