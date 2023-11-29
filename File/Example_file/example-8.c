#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE * fp;
	char name[20];
	int roll_no,chars;
	float marks;
	fp=fopen("records.txt","r");
	if(fp==NULL){
		printf("Error opening file\n");
		exit(1);
	}
	printf("Testing fscanf() function: \n\n");
	printf("Name\t\tRoll\t\tMarks\n");
	while(fscanf(fp,  "%s  %d  %f",name,&roll_no,&marks)!=EOF){
		printf("%s\t\t%d\t\t%.2f\n",name,roll_no,marks);
	}
	fclose(fp);
	return 0;
}
