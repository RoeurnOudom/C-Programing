#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE * fp;
	fp = fopen("ETEC2.txt","w");
	if(fp == NULL){
		printf("Error!");
		exit(1);
	}
	fprintf(fp,"Welcome to ETEC CENTER, Build Your IT Skill!\n");
	fclose(fp);
	printf("Write Success!");
}
