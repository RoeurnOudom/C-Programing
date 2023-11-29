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
	//sort array
	puts("________________________After Sort__________________________");
	int temp,s=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				s=1;
			}
		}
	}
	if(s==0)
    	puts("Sort not success");
	else
	   puts("Sort success"); 
		for(i=0;i<n;i++){
		printf("Array[%d]= %d\n",i+1,arr[i]);
	}
}
