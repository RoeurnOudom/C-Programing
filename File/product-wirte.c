#include<stdio.h>
#include<stdlib.h>
int main(){
	int code,qty,n,i;
	char name[20];
	float price,total;
	int c;
	FILE * set_pro;
	set_pro=fopen("Product.txt","w");
	printf("Enter the number of product you want to enter: ");
	scanf("%d",&n);
	if(set_pro == NULL){
	printf("Error!");
	exit(1);
	}
	for(i=0;i<n;i++){
		printf("\nEnter the details of product %d \n\n",i+1);
		printf("Input Code= "); scanf("%d",&code);fflush(stdin);
		printf("Input Name= "); scanf("%s",&name);
		printf("Input Qty= "); scanf("%d",&qty);
		printf("Input Price= "); scanf("%f",&price);
		total=qty*price;
		fprintf(set_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
	}
	fclose(set_pro);
}
