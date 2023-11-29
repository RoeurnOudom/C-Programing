//A poin to x
#include<stdio.h>
int main(){
	int x=100; //variable Declaration
	int *ptr; //pointer Declaration
	ptr=&x;
	
	printf("Address Variable X= %p\n",&x);
	printf("Address Pointer Ptr= %p\n",&ptr);
}
