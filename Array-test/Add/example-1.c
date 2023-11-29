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
	//Add array
	int n1,s=0;
	puts("________________________Add more array__________________________");
	printf("Add more array= ");
	 scanf("%d",&n1);
	for(i=n;i<n+n1;i++){
		printf("Input Array= "); 
		scanf("%d",&arr[i]);
	}
	puts("________________________After Add__________________________");
	for(i=0;i<n+n1;i++){
		printf("Array[%d]= %d\n",i+1,arr[i]);
		s=1;
	}
	if(s==0)
	puts("Add not success");
	else
	puts("Add success");		
}
