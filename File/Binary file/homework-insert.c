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
	int i,n,j=0,incode;
	bool check=false;
	FILE * insert_per;
	insert_per=fopen("insert.bin","wb");
	FILE * get_per;
	get_per=fopen("person.bin","rb");
	printf("Input Code to insert= "); scanf("%d",&incode);
	while(1==fread(&per,sizeof(struct Person),1,get_per)){
		if(incode==per.id){
			fwrite(&per,sizeof(struct Person),1,insert_per);
			printf("==================Person#%d====================\n",i+1);
			printf("Input ID= "); scanf("%d",&per.id);
			printf("Input Name= "); scanf("%s",&per.name); 
			printf("Input Gender= ");fflush(stdin); scanf("%c",&per.gender);
			printf("Input Position= "); scanf("%s",&per.position);
			printf("Input Salary= "); scanf("%f",&per.salary);
			fwrite(&per,sizeof(struct Person),1,insert_per);
		}else{
			fwrite(&per,sizeof(struct Person),1,insert_per);
		}
		check=true;
	}
	if(check==false){
		printf("Insert not success!");
	}else{
		printf("Insert Success");
	}
	fclose(get_per);
	fclose(insert_per);
	remove("person.bin");
	rename("insert.bin","person.bin");
}
