#include<stdio.h>
int findloop(int n){
	int i,sum=0;
	for(i=1;i<n;i++){
		sum+=i;
	}
	return sum;
}
int main(){
	int n;
	printf("Input N= ");
	scanf("%d",&n);
	printf("Sum=%d ",findloop(n)); //Arguments
}



