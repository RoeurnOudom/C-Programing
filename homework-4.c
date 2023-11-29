#include<stdio.h>
#include<math.h>
int main(){
	int number;
	printf("Input number(1-20): "); scanf("%d",&number);
	if(number==1||number==3||number==5||number==7){
		printf("Prime number");
	}else if(number%2==0||number%3==0||number%5==0||number%7==0){
		printf("Not Prime Number");
	}else{
		printf("Prime");
	}
return 0;
}
