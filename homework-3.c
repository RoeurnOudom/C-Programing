#include<stdio.h>
#include<math.h>
int main(){
	int id;
	char name[20],position[20];
	char gender;
	float salary,bonus,total;
	printf("Input ID: "); scanf("%d",&id); fflush(stdin);
	printf("Input Name: "); gets(name);
	printf("Input Position: "); gets(position);
	printf("Input Gender: "); scanf("%c",&gender);
	printf("Input Salary: "); scanf("%f",&salary);
	if(strcmp(position,"Accounting")==0){
		bonus=salary*0.2;
	}else if(strcmp(position,"Manager")==0){
		bonus=salary*0.3;
	}else if(strcmp(position,"IT")==0){
	    bonus=salary*0.5;
	}else{
		bonus=salary*0.1;
	}
	total=salary+bonus;
	printf("Bonus Salary=$%.0f\n",bonus);
	printf("Total Salary=$%.0f\n",total);
return 0;	
}
