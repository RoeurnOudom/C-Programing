#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("After Swap Value\n");
	printf("A=%d\n",*a);
	printf("B=%d\n",*b);
}
int main(){
	int a,b;
	a=100;
	b=200;
	// calling functionN
	swap(&a,&b);
	printf("After Calling Funciton\n");
	printf("A=%d\n",a);
	printf("B=%d\n",b);
}
