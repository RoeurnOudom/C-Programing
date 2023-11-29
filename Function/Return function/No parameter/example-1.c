#include<stdio.h>
#include<conio.h>
int sum1(){
	int a,b;
	printf("Input A="); scanf("%d",&a);
	printf("Input B="); scanf("%d",&b);
	return(a+b);
}
float sum2(){
	int a,b;
	printf("Input A="); scanf("%d",&a);
	printf("Input B="); scanf("%d",&b);
	return(a+b);
}
int main(){
	//calling function 
	printf("Sum1=%d\n",sum1());
	printf("Sum2=%f\n",sum2());
    return 0;
}
