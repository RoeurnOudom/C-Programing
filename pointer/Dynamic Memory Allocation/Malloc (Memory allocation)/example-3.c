#include<stdio.h>
#include<stdlib.h>
int main(){
	int *arr;
	int limit,i;
	int sum=0;
	printf("Enter total number of elements: "); 
	scanf("%d",&limit);
	//allocate memory for limit elements dynamically
	arr=(int*)malloc(limit*sizeof(int));
	if(arr==NULL){
		printf("Insufficient Memory, Exiting...\n");
		return 0;
	}
	printf("Enter %d elements: \n",limit);
	for(i=0;i<limit;i++){
		printf("Enter elements %3d: ",i+1);
		scanf("%d",(arr+i));
		//calculate sum
		sum=sum+*(arr+i);
	}
	printf("Array elements are:");
	for(i=0;i<limit;i++)
		printf("%3d ",*(arr+i));
	printf("\nSum of all elements: %d\n",sum);
	return 0;
}
