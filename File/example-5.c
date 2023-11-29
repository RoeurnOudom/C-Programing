#include<stdio.h>           //w=write,r=read,a=append
#include<stdlib.h>
int main(){
	char name[20];
	FILE *fptr;  //1.creating file
	fptr = fopen("Test.txt","w"); //2.opening file
	if(fptr == NULL){
		printf("Error!");
		exit(1);
	}
		printf("Enter text: "); scanf("%s",&name);
		fprintf(fptr,"%s",name);  
		printf("======================Write Completed=================\n");
		printf("GoodBye..........!");
		fclose(fptr);    //3.closing file
		return 0;
	
}
