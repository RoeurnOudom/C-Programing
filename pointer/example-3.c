//pointer
#include<stdio.h>
int main(){
	int x=100; //variable Declaration
	int *ptr; //pointer Declaration
	ptr=&x;
	
	printf("Address Variable X= %p\n",&x);
	printf("Address Pointer Ptr= %p\n",&ptr);
	
	printf("\n\nValue of X= %d\n",x);
	printf("Value of Ptr from X= %d\n",*ptr);
}
