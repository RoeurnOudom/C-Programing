#include<stdio.h>
#include<stdlib.h>
int main(){
	char get_num[20];
	FILE * fptr;
	if((fptr=fopen("Test.txt","r"))==NULL){   //r=read
		printf("Error! opening file");
		//program exite if the file pointer return NULL
		exit(1);
	}
	fscanf(fptr,"%s",&get_num);
	printf("Value of n=%s",get_num);
	fclose(fptr);
	return 0;
}
