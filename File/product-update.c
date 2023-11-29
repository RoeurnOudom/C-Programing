#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
	int code,qty;
	char name[20];
	float price,total;
	int ucode;
	FILE * read_pro;
	FILE * update_pro;
	update_pro = fopen("Update.txt","w");
	read_pro = fopen("Product.txt","r");
	bool check=false;
    printf("Input code for Update: ");
	scanf("%d",&ucode);
	if(update_pro == NULL){
	printf("Error!");
	exit(1);
	}
	int i=0;
	while((fscanf(read_pro,"%d %s %d %f %f",&code,&name,&qty,&price,&total))!=EOF){
		if(ucode==code){
			printf("\nEnter the details of product %d \n\n",i+1);
			printf("Input Code= "); scanf("%d",&code);
			printf("Input Name= "); scanf("%s",&name);
			printf("Input Qty= "); scanf("%d",&qty);
			printf("Input Price= "); scanf("%f",&price);
			total=qty*price;
			fprintf(update_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
			check=true;
		}
		else{
			fprintf(update_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
		}
	}
	fclose(update_pro);
	fclose(read_pro);
	remove("Product.txt");
	rename("Update.txt","Product.txt");
	if(check==false){
		printf("Search not Found\n");
	}
	else{
		printf("Update success\n");
	}
	
	return 0;
}
