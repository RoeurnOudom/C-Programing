#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<windows.h>
struct Person{
	int id;
	char name[20];
	char gender;
	char position[20];
	float salary;
}per,uper;
int main(){
	char status[20];
	int op;
	int code,qty,scode,c,n,i,j,ucode,dcode,icode;
	char name[20];
	float price,total;
	FILE * pro;
	do{
		printf("______________________[ P E R S O N ]______________________\n");
		printf("\t1.Input\n");
		printf("\t2.Output\n");
		printf("\t3.Search\n");
		printf("\t4.Update\n");
		printf("\t5.Delete\n");
		printf("\t6.Insert\n");
		printf("\t7.Add\n");
		printf("\t8.Clear\n");
		printf("Choose option on the menu= "); scanf("%d",&op);
		switch(op)
