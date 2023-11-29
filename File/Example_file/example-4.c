#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE * fp;
	char ch;
	fp = fopen("ETEC2.txt","r");
	if(fp == NULL){
		printf("Error!");
		exit(1);
	}
	while(fscanf(fp,"%c",&ch)!=EOF){
		printf("%c",ch);
	}
}
