#include<stdio.h>
int main(){
	char name[40],gender,position[100];
	int age;
	int op,i,j,n;
	FILE * emp;
	do{
	   printf("---------------------Tourism Employee--------------------\n");
	   printf("\t 1. Input Data\n");
	   printf("\t 2. Output Data\n");
	   printf("\t 3. Output Employee have age more 30 and position Leader Traveler\n");
	   printf("choose option= ");
	   scanf("%d",&op);
	   switch(op){
	   	case 1:	{
	   			emp=fopen("employee.txt","a");
	   			printf("Input number of Employee= "); scanf("%d",&n);
	   			for(i=0;i<n;i++){
	   				printf("\nEnter the details of Employee %d \n\n",i+1);
	   				printf("Input Name= "); fflush(stdin); gets(name);
	   				printf("Input Gender= "); scanf("%c",&gender);
	   				printf("Input Age= "); scanf("%d",&age);
	   				printf("Input Position= "); fflush(stdin); gets(position);
	   				fprintf(emp,"\n%s %c %d %s",name,gender,age,position);
				 }
				 fclose(emp);
			   }break;
		case 2: {
			   emp=fopen("employee.txt","r");
			   	printf("%-15s%-15s%-15s%-15s\n","Name","Gender","Age","Position");
			   while(fscanf(emp,"%s %c %d %[^\n]",&name,&gender,&age,&position)!=EOF){
			   	printf(" %-15s%-15c%-15d%-15s\n",name,gender,age,position);
			   }
			   fclose(emp);
		    }break;
		case 3: {
				emp=fopen("employee.txt","r");
				while(fscanf(emp,"%s %c %d %[^\n]",&name,&gender,&age,&position)!=EOF){
					if(age>30 && stricmp(position,"Leader Traveler")==0){
						printf(" %-15s%-15c%-15d%-15s\n",name,gender,age,position);
					}
			   }
			   fclose(emp);
	     	}break;
	   }
	}while(op!=4);
}
