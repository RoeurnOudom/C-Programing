#include<stdio.h>
int main(){
	int i,j;
	int a[2][2],b[2][2],c[2][2];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter Value A= "); scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter Value B= "); scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
	    c[i][j]=a[i][j]+b[i][j];
	}
}
  for(i=0;i<2;i++){
  	for(j=0;j<2;j++){
  		printf("%d ",c[i][j]);
	  }
	  printf("\n");
  }
}
