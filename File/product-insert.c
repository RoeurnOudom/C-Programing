#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
	int code,qty,icode,i,j=0;
	char name[20];
	float price,total;
	FILE * insert_pro;
	insert_pro = fopen("Insert.txt","w");
	FILE * read_pro;
	read_pro = fopen("Product.txt","r");
	bool check=false;
    printf("Input Code for insert: ");
	scanf("%d",&icode);
	if(insert_pro == NULL){
	printf("Error!");
	exit(1);
	}
	while((fscanf(read_pro,"%d %s %d %f %f",&code,&name,&qty,&price,&total))!=EOF){
		if(icode==code){
			fprintf(insert_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
			printf("\nEnter the details of product %d \n\n",i+1);
			printf("Input Code= "); scanf("%d",&code);
			printf("Input Name= "); scanf("%s",&name);
			printf("Input Qty= "); scanf("%d",&qty);
			printf("Input Price= "); scanf("%f",&price);
			total=qty*price;
			fprintf(insert_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
			j=1;
			check=true;
		}
		else{
			fprintf(insert_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
		}
	}
		if(check==false){
		printf("Insert not Suceess\n");
	}
	else{
		printf("Insert Suceess\n");
	}
	fclose(insert_pro);
	fclose(read_pro);
	remove("Product.txt");
	rename("Insert.txt","Product.txt");
}
