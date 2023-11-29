#include<stdio.h>
void findloop(int n){
	int i;
	for(i=1;i<n;i++){
		printf("%d ",i);
	}
}
int main(){
	int n;
	printf("Input N= ");
	scanf("%d",&n);
	findloop(n);  
	//Arguments
}
