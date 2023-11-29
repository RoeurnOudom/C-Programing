#include<stdio.h>
struct Person{
	int id;
	char name[20];
	char gender;
	char position[20];
	float salary;
}per;
int main(){
	int i,n;
	FILE * set_per;
	set_per =fopen("Person.bin","w");
	if(!set_per){
	printf("Unable to open file!");
	return 1;
	}
	printf("Input Number of Person: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    printf("==================Person#%d====================\n",i+1);
		printf("Input ID= "); scanf("%d",&per.id);
		printf("Input Name= "); scanf("%s",&per.name); 
		printf("Input Gender= ");fflush(stdin); scanf("%c",&per.gender);
		printf("Input Position= "); scanf("%s",&per.position);
		printf("Input Salary= "); scanf("%f",&per.salary);
		fwrite(&per,sizeof(struct Person),1,set_per);
	}
	printf("Write Succesful....!");
	fclose(set_per);
}
