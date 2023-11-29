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
	int i,n,d=0,dcode;
	bool check=false;
	FILE *delete_per;
	delete_per=fopen("delete.bin","wb");
	FILE *get_per;
	get_per=fopen("person.bin","rb");
	printf("Input Code to delete= "); scanf("%d",&dcode);
	while(1==fread(&per,sizeof(struct Person),1,get_per)){
		if(dcode==per.id){
			d=1;
		}else{
			fwrite(&per,sizeof(struct Person),1,delete_per);
		}
		check=true;
	}
	if(check==false){
		printf("Delete not success!");
	}else{
		printf("Delete success!");
	}
	fclose(get_per);
	fclose(delete_per);
	remove("person.bin");
	rename("delete.bin","person.bin");
}
