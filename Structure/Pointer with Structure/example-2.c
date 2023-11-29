#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Books{
	int code;
	char title[20];
	int qty;
	float price;
};
int main(){
	struct Books *p;
	p=(struct Books *)malloc(sizeof(struct Books));
	//input
	      printf("Input Code= "); scanf("%d",&p->code); fflush(stdin);
	      printf("Input Titile= "); gets(p->title);
	      printf("Input Quantity= "); scanf("%d",&p->qty);
	      printf("Input Unit Price= "); scanf("%f",&p->price);
	//output
	printf("%-15s%-15s%-15s%-15s\n","Code","Name","Qty","Price");
	printf("%-15d",p->code);
	printf("%-15s",p->title);
	printf("%-15d",p->qty);
	printf("%-15f",p->price);
}
