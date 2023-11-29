#include<stdio.h>
#include<string.h>
struct student{
	char firstname[60];
	char lastname[60];
	char id[60];
	int score;
};
//function declaretion
struct student getDetail(void);
void displayDetail(struct student std);
int main(void){
	//Creating a student structure array vaiable
	struct student stdArr[3];
	//other vaiables
	int i; 
	//taking user input
	for(i=0;i<3;i++){
		printf("Enter detail of student #%d\n",(i+1));
		stdArr[i]= getDetail();
	}
	//Output
	for(i=0;i<3;i++){
		printf("\nStudent #%d Detail: \n",(i+1));
		displayDetail(stdArr[i]);
	}
     return 0;
}
//fucntion return structure  object
struct student getDetail(void){
	//temp structure varaible
	struct student std;
	printf("Enter First Name: ");
	scanf("%s",std.firstname);
	printf("Enter Last Name: ");
	scanf("%s",std.lastname);
	printf("Enter ID: ");
	scanf("%s",std.id);
	printf("Score: ");
	scanf("%d",&std.score);
	return std;
}
void displayDetail(struct student std){
	printf("First Nane: %s\n",std.firstname);
	printf("Last Name: %s\n",std.lastname);
	printf("ID: %s\n",std.id);
	printf("Score: %d\n",std.score);
}
