#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE * fp;
	char text[20];
	fp = fopen("ETEC2.txt","w");
	if(fp == NULL){
		printf("Error!");
		exit(1);
	}
	printf("Input Text: "); 
	gets(text);
	fputs(text,fp);
	printf("Write to successfully.....!");
	fclose(fp);
	
}
