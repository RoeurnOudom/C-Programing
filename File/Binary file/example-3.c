#include<stdio.h>
struct Students{
	int id;
	char name[20];
	char sex;
	float score;
};
int main(){
	int i,n;
	FILE * ptr_myfile;
	struct Students stu;
	ptr_myfile=fopen("students.bin","wb");
	if(!ptr_myfile){
		printf("Unable to open file!");
		return 1;
	}
	printf("Input Number of Students: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("==================Record#%d====================\n",i+1);
		printf("Input ID= "); scanf("%d",&stu.id); fflush(stdin);
		printf("Input Name= "); scanf("%s",&stu.id); fflush(stdin);
		printf("Input Gender= "); scanf("%c",&stu.sex);
		printf("Input Score= "); scanf("%f",&stu.score);
		fwrite(&stu, sizeof(struct Students),1,ptr_myfile);		
	}
	printf("Write Succesful...!");
	fclose(ptr_myfile);
	return 0;
}
