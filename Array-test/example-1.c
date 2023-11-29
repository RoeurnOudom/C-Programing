//input and output arrray
#include<stdio.h>
int main(){
	int arr[20];
	int i,n,sum=0;
	printf("Input number= "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Input Array[%d]= ",i); scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("\nArray[%d]= %d",i,arr[i]);
	}
	// even and odd
      for(i=0;i<n;i++){
 	  if(arr[i]%2==0)
 	  printf("\nEven number= %d",arr[i]);
 	  else
 	  printf("\nOdd number= %d",arr[i]);
 	
 }
    // sum of array
    for(i=0;i<n;i++){
    	sum += arr[i];
	}
	printf("\nSum= %d",sum);
return 0;
}
