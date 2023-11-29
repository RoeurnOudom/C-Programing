//pointer with Funtion
#include<stdio.h>
int *getMax(int *, int *);
int main(){
	//integer variables
	int x=100;
	int y=200;
	//pointer variable
	int *max=NULL;
	max=getMax(&x,&y);
	//print the greater value
	printf("Max value: %d\n",*max);
	return 0;
}
//function definition
int *getMax(int *m,int *n){
    if(*m>*n){
    	return m;
	}
	else{
		return n;
	}
}
