#include<stdio.h>
struct Students{
	int id;
	char name[20];
	char sex;
	float score;
};
int main(){
	int i=1,n;
	FILE * ptr_myfile;
	struct Students stu;
	ptr_myfile=fopen("students.bin","rb");
	if(!ptr_myfile){
		printf("Unable to open file!");
		return 1;
	}
	while(1==fread(&stu, sizeof(struct Students),1,ptr_myfile)){
		printf("==================Record#%d====================\n",i);
		printf(" ID=%d\n",stu.id); 
		printf(" Name=%s\n",stu.name); 
		printf(" Gender=%c\n",stu.sex); 
		printf(" Score=%f\n",stu.score);
	    i++;
	}
	printf("Write Succesful...!");
	fclose(ptr_myfile);
	return 0;
}
