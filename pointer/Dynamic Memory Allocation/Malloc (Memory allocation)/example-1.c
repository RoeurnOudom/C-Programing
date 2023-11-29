#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr_one;
	ptr_one = (int *)malloc(sizeof(int));
	if(ptr_one == 0){
		printf("ERORR: Out of memory\n");
	}
	printf("Input Value to ptr= ");
	scanf("%d",ptr_one);
	printf("Value after Input= %d\n",*ptr_one);
	free(ptr_one);
	return 0;
}
