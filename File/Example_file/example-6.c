#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE * fp;
	char buffer[255];
	fp = fopen("ETEC2.txt","r");
	if(fp == NULL){
		printf("Error!");
		exit(1);
	}
	while(fgets(buffer,255,fp)!=NULL){
		printf("%s",buffer);
	}
}
