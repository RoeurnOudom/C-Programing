#include<stdio.h>
int main(){
	int arr[20];
	int i,n,search=0,svalue;
	printf("Input Number Array= ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Input Array[%d]= ",i+1);
		scanf("%d",&arr[i]);
	}
	//OutPut Array
	for(i=0;i<n;i++){
		printf("Array[%d]= %d\n",i+1,arr[i]);
	}
	//Array Search
	printf("\n---------------Search Array----------\n");
	printf("\nInput Search Value = ");scanf("%d",&svalue);
	for(i=0;i<5;i++){
		if(svalue==arr[i]){
			printf("\nSearch Found [%d]= %d\n",i+1,svalue);
			search=1;
		}
	}
	if(search==0){
		printf("\nSearch Not Found\n");
	}
}
