#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int n1,n2,*ptr;
	int i;
	printf("Input n1: ");
	scanf("%d",&n1);
	ptr=(int*)malloc(sizeof(int));
	for(i=0;i<n1;i++){
		printf("Input value of (ptr+%d): ",i);
		scanf("%d",(ptr+i));
	}
	printf("Input n2: ");
	scanf("%d",&n2);
	ptr=(int*)realloc(ptr,n2*sizeof(int*));
	for(i=n1;i<n1+n2;i++){
		printf("Input Value of (ptr+%d): "); 
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n1+n2;i++){
		printf("Value of (ptr+%d)=%d\n",i,*(ptr+i));
	}
}
