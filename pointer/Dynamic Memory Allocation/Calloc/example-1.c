#include<stdio.h>
#include<stdlib.h>
int main(){
	int num,i,*ptr,sum=0;
	printf("Enter number of elements: ");
	scanf("%d",&num);
	ptr=(int*)calloc(num,sizeof(int));
		for(i=0;i<num;++i){
			printf("Enter element of array: ");
			scanf("%d",ptr+i);
			sum += *(ptr+i);
		}
	printf("Sum= %d",sum);
    free(ptr);  //store on ram
    return 0;
}
