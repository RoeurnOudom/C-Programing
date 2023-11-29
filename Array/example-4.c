#include<stdio.h>
int main(){
	int a[50];
	int i,n,sum=0;
	printf("Input number of Array= "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("[%d] Enter Value= ",i+1); scanf("%d",&a[i]);
		sum += a[i]; // sum of array
	}
     for(i=0;i<n;i++){
    printf(" %d ",a[i]);
 }
 printf("\nSum of array result= %d",sum);
 for(i=0;i<n;i++){
 	  if(a[i]%2==0)
 	  printf("\nEven number= %d",a[i]);
 	  else
 	  printf("\nOdd number= %d",a[i]);
 	
 }
 return 0;
}
