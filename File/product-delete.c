#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
	int code,qty,dcode,i;
	char name[20];
	float price,total;
	FILE * delete_pro;
	delete_pro = fopen("Delete.txt","w");
	FILE * read_pro;
	read_pro = fopen("Product.txt","r");
	bool check=false;
    printf("Input Code for Delete: ");
	scanf("%d",&dcode);
	if(delete_pro == NULL){
	printf("Error!");
	exit(1);
	}
	while((fscanf(read_pro,"%d %s %d %f %f",&code,&name,&qty,&price,&total))!=EOF){
		if(dcode==code){
			check=true;
		}
		else{
			fprintf(delete_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
		}
	}
		if(check==false){
		printf("Delete not Suceess\n");
	}
	else{
		printf("Delete Suceess\n");
	}
	fclose(delete_pro);
	fclose(read_pro);
	remove("Product.txt");
	rename("Delete.txt","Product.txt");
}
