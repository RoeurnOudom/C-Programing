//Level of Pointer
#include<stdio.h>
int main(){
	int x=100;
	int *p1,**p2,***p3;
	p1=&x;
	p2=&p1;
	p3=&p2;
	printf("Pointer of P3= %d\n",***p3);
	printf("Pointer of P2= %d\n",**p2);
	printf("Pointer of P1= %d\n",*p1);
    printf("Value of x= %d\n",x);
}
