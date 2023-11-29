#include<stdio.h>
int main(){
	int a[50];
	int i,n;
	printf("Input number of Array= "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("[%d] Enter Value= ",i+1); scanf("%d",&a[i]);
	}
     for(i=0;i<n;i++){
     	printf(" %d ",a[i]);
	 }
	 return 0;
}
