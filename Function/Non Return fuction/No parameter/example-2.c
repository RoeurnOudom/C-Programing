#include<stdio.h>
void findloop(){
	int n,i;
	printf("Input N= ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		printf("%d ",i);
	}
}
int main(){
	findloop();
}
