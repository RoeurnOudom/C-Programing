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
	//Array Update
	int uvalue, u=0;
	printf("---------------Update Array---------------\n");
	printf("\nInput Value To Update = ");scanf("%d",&uvalue);
	for(i=0;i<n;i++){
		if(uvalue==arr[i]){
			printf("Input New Value = ");scanf("%d",&arr[i]);
			printf("Update Success\n");
			u=1;
		}
	}
	if(u==0){
		printf("Update not success\n");
	}
	for(i=0;i<n;i++){
		printf("Array[%d]= %d\n",i+1,arr[i]);
	}
}
