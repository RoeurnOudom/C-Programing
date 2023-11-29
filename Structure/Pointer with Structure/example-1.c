#include<stdio.h>
struct employee{
	char name[20];
	int age;
	char doj[20];  //date of joining
	char designation[20];
};
void printf_struct(struct employee *);
int main(){
	struct employee dev = {"Chang Jong",25,"01/January/2020","IT Instructor"};
	struct employee *p;
	p=&dev;
	printf("Name: %s\n",p->name);
	printf("Age: %d\n",p->age);
	printf("Date of Joining: %s\n",p->doj);
	printf("Designation: %s\n",p->designation);
	printf("\n");
	return 0;
}
