#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE * pro;
	char name[20];
	int code,qty;
	float price,total;
	pro=fopen("Product.txt","r");
	if(pro==NULL){
		printf("Error opening file\n");
		exit(1);
	}
	printf("Output Product: \n\n");
	printf("%-15s%-15s%-15s%-15s%-15s\n","Code","Name","Qty","Price","Total");
	while((fscanf(pro,"%d %s %d %f %f",&code,&name,&qty,&price,&total))!=EOF){   //use gets[^\n]
		printf("%-15d%-15s%-15d%-15f%-15f\n",code,name,qty,price,total);
	}
	fclose(pro);
	return 0;
}
