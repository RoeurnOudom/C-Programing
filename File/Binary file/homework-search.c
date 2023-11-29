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
	int i=1;
	int scode;
	FILE * search_per;
	search_per =fopen("person.bin","rb");
	bool check=false;
	printf("Input code for Search: ");
	scanf("%d",&scode);
	if(!search_per){
		printf("Unable to open file!");
		return 1;
	}
	while(1==fread(&per, sizeof(struct Person),1,search_per)){
		if(scode==per.id){
			printf("==================Person#%d====================\n",i);
			printf(" ID=%d\n",per.id); 
			printf(" Name=%s\n",per.name); 
			printf(" Gender=%c\n",per.gender); 
			printf(" Position=%s\n",per.position);
			printf(" Salary=%.2f\n",per.salary);
			check=true;
		}
	}
	if(check==false){
		printf("Search not Found\n");
	}
	else{
		printf("Search Found\n");
	}
	fclose(search_per);
	return 0;
}
