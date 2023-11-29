#include<stdio.h>
void Increase(int *m,int *n){
	*m=*m+1;
	*n=*n+1;
}
int main(){
	int m=10,n=5;
	printf("m and n: %d %d before call funciton!\n",m,n);
	Increase(&m,&n);
	printf("m and n: %d %d after call function!\n",m,n);
}
