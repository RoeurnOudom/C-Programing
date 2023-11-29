#include<stdio.h>
struct person{
	char name[10];
	int id;
	float salary;
	char sex;
}per;
int main(){
	printf("Input ID= "); 
	scanf("%d",&per.id);
	printf("Input Name= ");
	fflush(stdin);
	gets(per.name);
	printf("Sex= ");
	scanf("%c",&per.sex);
	printf("Input Salary= ");
	scanf("%f",&per.salary);
	printf("__________________________________________________________\n");
	printf("%-15s%-15s%-15s%-15s\n","ID","Name","Sex","Salary");
	printf("__________________________________________________________\n");
	printf("%-15d%-15s%-15c$%-15.2f\n",per.id,per.name,per.sex,per.salary);
	return 0;
	
}
