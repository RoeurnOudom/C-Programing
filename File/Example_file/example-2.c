#include<stdio.h>
#include<stdlib.h>
int main(){
	int get_num;
	FILE * fptr;
	if((fptr=fopen("ETEC1.txt","r"))==NULL){   //r=read
		printf("Error! opening file");
		//program exite if the file pointer return NULL
		exit(1);
	}
	fscanf(fptr,"%d",&get_num);
	printf("Value of n=%d",get_num);
	fclose(fptr);
	return 0;
}
