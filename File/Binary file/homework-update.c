#include<stdio.h>
#include<stdbool.h>
struct Person{
	int id;
	char name[20];
	char gender;
	char position[20];
	float salary;
}per,uper;
int main(){
	int ucode;
	FILE * update_per;
	update_per =fopen("update.bin","wb");
	FILE * read_per;
	read_per=fopen("person.bin","rb");
	bool check=false;
	printf("Input code for Update= ");
	scanf("%d",&ucode);
	if(!update_per){
		printf("Unable to open file!");
		return 1;
	}
	while(1==fread(&per, sizeof(struct Person),1,read_per)){
		if(ucode==per.id){
		printf("Input ID= "); scanf("%d",&uper.id);
		printf("Input Name= "); scanf("%s",&uper.name); 
		printf("Input Gender= ");fflush(stdin); scanf("%c",&uper.gender);
		printf("Input Position= "); scanf("%s",&uper.position);
		printf("Input Salary= "); scanf("%f",&uper.salary);
		fwrite(&uper,sizeof(struct Person),1,update_per);
		check=true;
		}else{
			fwrite(&per,sizeof(struct Person),1,update_per);
		}
	}
	if(check==false){
		printf("Update not Succesful..!\n");
	}
	else{
		printf("Update Succesfuly..\n");
	}
	fclose(update_per);
	fclose(read_per);
	remove("person.bin");
	rename("update.bin","person.bin");
}

