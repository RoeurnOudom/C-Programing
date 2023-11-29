#include<stdio.h>
int main(){
	double num,sum=0;
	// loop body is executed at least once
	do{
		printf("Enter a number: ");
	    scanf("%lf",&num);
	    sum=sum+num;
	}while(num!=0.0);
	printf("Sum = %.2lf",sum);
return 0;
}
