#include<stdio.h>
#include<conio.h>
// funciton definition
void sum1(){
	int a,b;
	a=10;
	b=20;
	printf("Result of A+B=%d\n",(a+b));
}
void sum2(){
	float a,b;
	a=10.4;
	b=20.3;
	printf("Result of A+B=%.2f\n",(a+b));
}
int main(){
	//calling function for exercute
	sum1();
	sum2();
}
