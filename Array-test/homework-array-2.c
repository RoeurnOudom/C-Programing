#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	int id[10];
	char name[20][30];
	char gender[10];
	float salary[20];
	int i,j,n,op,temp,s=0;
	do{
		printf("______________________[ Information ]______________________\n");
		printf("\t1.Input\n");
		printf("\t2.Output\n");
		printf("\t3.Search\n");
		printf("\t4.Update\n");
		printf("\t5.Delete\n");
		printf("\t6.Insert\n");
		printf("\t7.Sort\n");
		printf("\t8.Add\n");
		printf("\t9.Clear\n");
		printf("\t10.Exit\n");
		printf("Choose option on the menu(1-10)= "); scanf("%d",&op);
		switch(op){
			case 1: {
				    system("cls");
			    	puts("---------------[Input Information ]--------");
			    	printf("Input Number of Employee : ");scanf("%d",&n);
			    	for(i=0;i<n;i++){
			    		printf("-------Employee # %d ---------\n",i+1);
			    		printf("Input ID= "); scanf("%d",&id[i]);
						printf("Input Name= "); scanf("%s",&name[i]); fflush(stdin);
						printf("Input Gender= "); scanf("%c",&gender[i]);
						printf("Input Salary= "); scanf("%f",&salary[i]);
					}
	               	
		   	}break;
		    case 2: {
		    	     system("cls");
		    	    printf("\n---------------[Ouput Information]---------\n");
		           	printf("%-15s%-15s%-15s%-15s\n","ID","Name","Gender","Salary");
		           	for(i=0;i<n;i++){
						printf("%-15d%-15s%-15c$%-15.2f\n",id[i],name[i],gender[i],salary[i]);
					}
		           	
			}break;
			case 3 :{
				        system("cls");
						int sid;
						bool check=false;
						printf("\n---------------[Search Information]---------\n");
						printf("Input ID to search : ");scanf("%d",&sid);
						for(i=0;i<n;i++){
					if(sid == id[i]){
						printf("%-15s%-15s%-15s%-15s\n","ID","Name","Gender","Salary");
						printf("%-15d%-15s%-15c$%-15.2f\n",id[i],name[i],gender[i],salary[i]);
						printf("Search Found !!\n");
						check=true;
					}
				}
				if(check==false){
					printf("Search Not Found !!\n");
				}
			}break;
			case 4: {
				    system("cls");
				    bool check=false;
			     	int uvalue, u=0;
			     	int index;
					printf("---------------[Update Information]---------------\n");
					printf("Input index to update= "); scanf("%d",&index);
					if(index<n){
						printf("Input ID= "); scanf("%d",&id[index]);
						printf("Input Name= "); scanf("%s",&name[index]); fflush(stdin);
						printf("Input Gender= "); scanf("%c",&gender[index]);
						printf("Input Salary= "); scanf("%f",&salary[index]);
						check=true;
					}
//					printf("\nSearch by ID for Update = ");scanf("%d",&uvalue);
//			       for(i=0;i<n;i++){
//						if(uvalue==id[i]){
//						printf("Input ID= "); scanf("%d",&id[i]);
//						printf("Input Name= "); scanf("%s",&name[i]); fflush(stdin);
//						printf("Input Gender= "); scanf("%c",&gender[i]);
//						printf("Input Salary= "); scanf("%f",&salary[i]);
//						printf("Update Success\n");
//						check=true;
//						}
//					}
					if(check==false)
					printf("Search Not Found !!\n");
					else
					  printf("Update Success\n");
			}break;
			case 5: {
				    system("cls");
				    int dvalue;
			     	printf("---------------[Delete Information]---------------\n");
			     	bool check=false;
	                printf("Input ID for Delete= "); scanf("%d",&dvalue);
                   	for(i=0;i<n;i++){
		             	if(dvalue==id[i]){
			          		for(j=i;j<n;j++){
					     		id[j]=id[j+1];
								strcpy(name[j],name[j+1]);
								gender[j]=gender[j+1];
								salary[j]=salary[j+1];
						     }
						    n--;
					    	check=true;
			           	}
           			 }
	              if(check==false)
	             	puts("Delete not success");
		         else
		           puts("Delete success");	
		    }break;
		    case 6: {
		    	system("cls");
				char var[20];
				bool check=false;
				printf("\n---------------[Insert Information]---------\n");
				printf("Search by name for Insert= "); scanf("%s",&var);
				for(i=0;i<n;i++){
					if(stricmp(var,name[i])==0){
						for(j=n;j>=i;j--){
							id[j]=id[j-i];
							strcpy(name[j],name[j-i]);
							gender[j]=gender[j-i];
							salary[j]=salary[j-i];
						}
						printf("Input ID= "); scanf("%d",&id[i]);
						printf("Input Name= "); scanf("%s",&name[i]); fflush(stdin);
						printf("Input Gender= "); scanf("%c",&gender[i]);
						printf("Input Salary= "); scanf("%f",&salary[i]);
						n++;
						check=true;
						break;
					}
				}
					if(check==false)
			     	puts("Search not Found");
				else
				    puts("Insert success");	
			}break;
			case 7: {
				    system("cls");
				    bool check=false;
				    char tname[30];
	            	puts("--------------[After Sort]---------------------");
	            	printf("%-15s%-15s%-15s%-15s\n","ID","Name","Gender","Salary");
	                for(i=0;i<n;i++){
	              	for(j=i+1;j<n;j++){
	          		if(salary[i]<salary[j]){
	          		temp=id[i];
		      		id[i]=id[j];
		       		id[j]=temp;
		       		strcpy(tname,name[i]);
		       		strcpy(name[i],name[j]);
		       		strcpy(name[j],tname);
		       		temp=gender[i];
		      		gender[i]=gender[j];
		       		gender[j]=temp;
		       		temp=salary[i];
		      		salary[i]=salary[j];
		       		salary[j]=temp;
		      		check=true;
		       	}
	    	}
    	}
		        for(i=0;i<n;i++){
				printf("%-15d%-15s%-15c$%-15.2f\n",id[i],name[i],gender[i],salary[i]);
	           }
              	if(check==false)
			     	puts("Search not Found");
				else
				   puts("Sort success");
	            
		    }break;
			case 8: {
				system("cls");
				int add,b=0;
				puts("--------------[Add Information]---------------------");
				printf("Add more Information= "); scanf("%d",&add);
				for(i=n;i<n+add;i++){
					printf("-------Employee # %d ---------\n",i+1);
					printf("Input ID= "); scanf("%d",&id[i]);
					printf("Input Name= "); scanf("%s",&name[i]); fflush(stdin);
					printf("Input Gender= "); scanf("%c",&gender[i]);
					printf("Input Salary= "); scanf("%f",&salary[i]);
					b=1;
				}
				if(b==0)
				puts("Add not success");
				else{
					n+=add;
					puts("Add success");
				}
			}break;
			case 9: {
			      system("cls");	
		    }break;
}
}while(op!=10);
}
