/*C programing to read and print the N student 
detail using structure and Dynamic Memory Allocation.*/
#include<stdio.h>
#include<stdlib.h>
//structure declaration
struct student{
	char name[30];
	int roll;
	float score;
};
int main(){
	struct student *pstd;
	int n,i;
	printf("Enter total number of elements: ");
	scanf("%d",&n);
	//Allocate memory dynamically for n object
	pstd=(struct student*)malloc(n*sizeof(struct student));
	if(pstd==NULL){
		printf("Insufficient Memory, Exitting...\n");
		return 0;
	}
	//read and print details
	for(i=0;i<n;i++){
		printf("\nEnter detail of student [%3d]: \n",i+1);
		printf("Enter name: ");
		scanf(" "); //clear input buffer
		gets((pstd+i)->name);
		printf("Enter roll number: ");
		scanf("%d",&(pstd+i)->roll);
		printf("Enter Score: ");
		scanf("%f",&(pstd+i)->score);
	}
	printf("\nEntered detail are: \n");
	for(i=0;i<n;i++){
		printf("%30s\t%5d\t%.2f\n",(pstd+i)->name,(pstd+i)->roll,(pstd+i)->score);
	}
	free(pstd);
	return 0;
}
