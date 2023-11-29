#include<stdio.h>
int main(){
	int x[4];
	int i;
	for(i=0;i<4;i++){
		printf("Input value to X[%d]: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<4;i++){
	  printf("Value of *(x+%d)=  %d\n",i,*(x+i));	
	}	
}
