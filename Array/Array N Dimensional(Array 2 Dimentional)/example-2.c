#include<stdio.h>
int main(){
	int a[50][50],i,j,n,n1;
	printf("Input number of Row= "); scanf("%d",&n);
	printf("Input number of Cloumn= "); scanf("%d",&n1);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter Value= "); scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n1;j++){
			printf("%d",a[i][j]);
		}
	}
	return 0;
}
