#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
	int code,qty;
	char name[20];
	float price,total;
	FILE * search_pro;
	search_pro = fopen("Product.txt","r");
	bool check=false;
	int scode;
    printf("Input Scode: ");
	scanf("%d",&scode);
	if(search_pro == NULL){
	printf("Error!");
	exit(1);
	}
	printf("%-15s%-15s%-15s%-15s%-15s\n","Code","Name","Qty","Price","Total");
	while((fscanf(search_pro,"%d %s %d %f %f",&code,name,&qty,&price,&total))!=EOF){
		if(scode==code){
	    	printf("%-15d%-15s%-15d%-15f%-15f\n",code,name,qty,price,total);
	    	check=true;
		}
	}
	if(check==false){
		printf("Search not Found\n");
	}
	else{
		printf("Search Found\n");
	}
	fclose(search_pro);
	return 0;
}
