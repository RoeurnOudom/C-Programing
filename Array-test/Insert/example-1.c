#include<stdio.h>
#include<stdbool.h>
int main()
{
	int arr[20];
	int i,j,n,search=0,svalue,dvalue,index,ivalue;
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
	//Insert Array
	bool check=false;
	printf("Input index to insert= "); scanf("%d",&index);
	if(index<n){
		for(i=n;i>=index;i--){
			arr[i]=arr[i-1];
		}
		n++;
		printf("Input new value= "); scanf("%d",&arr[i]);
		check=true;
	}
    	for(i=0;i<n;i++){
		printf("Array[%d]= %d\n",i+1,arr[i]);
	}
	 if(check==false)
    	puts("Insert not success");
	else
	   puts("Insert success"); 
}
