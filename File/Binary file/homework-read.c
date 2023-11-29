#include<stdio.h>
struct Person{
	int id;
	char name[20];
	char gender;
	char position[20];
	float salary;
}per;
int main(){
	int i=1;
	FILE * get_per;
	get_per =fopen("Person.bin","r");
	if(!get_per){
		printf("Unable to open file!");
		return 1;
	}
	while(1==fread(&per, sizeof(struct Person),1,get_per)){
		printf("==================Person#%d====================\n",i);
		printf(" ID=%d\n",per.id); 
		printf(" Name=%s\n",per.name); 
		printf(" Gender=%c\n",per.gender); 
		printf(" Position=%s\n",per.position);
		printf(" Salary=%.2f\n",per.salary);
	    i++;
	}
	fclose(get_per);
	return 0;
}
