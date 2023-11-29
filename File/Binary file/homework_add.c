#include<stdio.h>
#include<stdbool.h>
struct Person{
	int id;
	char name[20];
	char gender;
	char position[20];
	float salary;
}per;
int main(){
	int i,n;
	bool check=false;
	FILE * add_per;
	add_per=fopen("person.bin","ab");
	printf("Add number of person= "); scanf("%d",&n);
	for(i=0;i<n;i++){
			printf("==================Person#%d====================\n",i+1);
			printf("Input ID= "); scanf("%d",&per.id);
			printf("Input Name= "); scanf("%s",&per.name); 
			printf("Input Gender= ");fflush(stdin); scanf("%c",&per.gender);
			printf("Input Position= "); scanf("%s",&per.position);
			printf("Input Salary= "); scanf("%f",&per.salary);
			fwrite(&per,sizeof(struct Person),1,add_per);
			check=true;
	}
	if(check==false){
		printf("Add not Success!");
	}else{
		printf("Add success");
	}
	fclose(add_per);
}
