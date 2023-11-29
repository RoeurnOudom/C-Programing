// Array to pointer
#include<stdio.h>
int main(){
	int x[4];
	int i;
	for(i=0;i<4;i++){
		printf("&x[%d]= %p\n",i&x[4]);
	}
	for(i=0;i<4;i++){
	  printf("Address of *(x+%d)=  %p\n",i,*(x+i));	
	}	
}
