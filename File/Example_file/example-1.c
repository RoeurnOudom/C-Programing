#include<stdio.h>           //w=write,r=read,a=append
#include<stdlib.h>
int main(){
	int num;
	FILE *fptr;  //1.creating file
	fptr = fopen("ETEC1.txt","w"); //2.opening file     w=write,use only small w
	if(fptr == NULL){
		printf("Error!");
		exit(1);
	}
		printf("Enter num: "); scanf("%d",&num);
		fprintf(fptr,"%d",num);  
		printf("======================Write Completed=================\n");
		printf("GoodBye..........!");
		fclose(fptr);    //3.closing file
		return 0;
	
}
