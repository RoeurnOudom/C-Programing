//pointer
#include<stdio.h>
int main(){
	int x=100,y=100; //variable Declaration
	int *ptr1,*ptr2; //pointer Declaration
	ptr1=&x;   //pointer point to x
    ptr2=&y;
    
	printf("Value of Ptr1 + Ptr2= %d\n",(*ptr1)+(*ptr2));
	printf("Value of Ptr1 - Ptr2= %d\n",(*ptr1)-(*ptr2));
	printf("Value of Ptr1 * Ptr2= %d\n",(*ptr1)*(*ptr2));
	printf("Value of Ptr1 / Ptr2= %d\n",(*ptr1)/(*ptr2));
}
