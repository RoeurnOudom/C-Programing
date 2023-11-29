#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
int main(){
	int i,j,n,op;
	int qty;
	float total,price;
	char product[20][5][15];
	char scode[20];
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
				        printf("\n----------------[Input Product]--------------\n");
			    	    printf("Input N= "); scanf("%d",&n);
							for(i=0;i<n;i++){
								    printf("-------Product # %d ---------\n",i+1);
									printf("Input Code= "); scanf("%s",&product[i][0]); 
									printf("Input Name= "); scanf("%s",&product[i][1]);
									printf("Input Qty= "); scanf("%s",&product[i][2]); 
									printf("Input Price= "); scanf("%s",&product[i][3]); 
									total=atoi(product[i][2])*atof(product[i][3]);
									sprintf(product[i][4],"%.2f",total);
						    }
					} break; 
			case 2: {
				    system("cls");
			     	printf("\n ------------------[Ouput Product]----------\n");
				    printf("%-15s %-15s %-15s %-15s %-15s\n","Code","Name","Qty","Price","Total");
					for(i=0;i<n;i++){
					printf("%-15s %-15s %-15s %-15s$ %-15s\n",product[i][0],product[i][1],product[i][2],product[i][3],product[i][4]);
				}
			}break;	
			case 3 :{ 
			            system("cls");
						bool check=false;
						printf("\n---------------[Search Product]---------\n");
						printf("Input Code to search : "); scanf("%s",&scode);
						for(i=0;i<n;i++){
					if(stricmp(scode,product[i][0])== 0){
						printf("%-15s %-15s %-15s %-15s %-15s\n","Code","Name","Qty","Price","Total");
						printf("%-15s %-15s %-15s %-15s$ %-15s\n",product[i][0],product[i][1],product[i][2],product[i][3],product[i][4]);
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
			     	char uvalue[20];
					printf("-----------------[Update Product]---------------\n");
					printf("\nSearch by Code for Update = ");scanf("%s",&uvalue);
			    	for(i=0;i<n;i++){
		            if(stricmp(uvalue,product[i][0])== 0){
						printf("Input Code= "); scanf("%s",&product[i][0]); 
						printf("Input Name= "); scanf("%s",&product[i][1]);
						printf("Input Qty= "); scanf("%s",&product[i][2]); 
						printf("Input Price= "); scanf("%s",&product[i][3]);
						check=true;
				}
			}
	             	if(check==false)
		        	printf("Search Not Found !!\n");
					else
				    printf("Update Success\n");
			}break;
			case 5: {
				   system("cls");
				   char dvalue[20];
			     	printf("---------------[Delete Information]---------------\n");
			     	bool check=false;
	                printf("Input Code for Delete= "); scanf("%s",&dvalue);
                   	for(i=0;i<n;i++){
		             	if(stricmp(dvalue,product[i][0])==0){
			          		for(j=i;j<n;j++){
					     		strcpy(product[j][0],product[j+1][0]);
					     		strcpy(product[j][1],product[j+1][1]);
					     		strcpy(product[j][2],product[j+1][2]);
					     		strcpy(product[j][3],product[j+1][3]);
					     		strcpy(product[j][4],product[j+1][4]);
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
				printf("Search by Code for Insert= "); scanf("%s",&var);
				for(i=0;i<n;i++){
					if(stricmp(var,product[i][0])==0){
						for(j=n;j>=i;j--){
							    strcpy(product[j][0],product[j-1][0]);
					     		strcpy(product[j][1],product[j-1][1]);
					     		strcpy(product[j][2],product[j-1][2]);
					     		strcpy(product[j][3],product[j-1][3]);
					     		strcpy(product[j][4],product[j-1][4]);
						}
						printf("Input Code= "); scanf("%s",&product[i][0]); 
						printf("Input Name= "); scanf("%s",&product[i][1]);
						printf("Input Qty= "); scanf("%s",&product[i][2]); 
						printf("Input Price= "); scanf("%s",&product[i][3]); 
						total=atoi(product[i][2])*atof(product[i][3]);
						sprintf(product[i][4],"%.2f",total);
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
				    char temp[20];
				    bool check=false;
				    char namee[20],codee[20],qtyy[20],pricee[20],totall[20];
	            	printf("--------------[After Sort]---------------------\n");
	            	printf("%-15s %-15s %-15s %-15s %-15s\n","Code","Name","Qty","Price","Total");
	                for(i=0;i<n;i++){
	              	for(j=i+1;j<n;j++){
	          		if(stricmp(product[i][0],product[j][0])<0){
	          		strcpy(codee,product[i][0]);
		            strcpy(product[i][0],product[j][0]);
		         	strcpy(product[j][0],codee);
	          		strcpy(namee,product[i][1]);
		            strcpy(product[i][1],product[j][1]);
		         	strcpy(product[j][1],namee);
		         	strcpy(qtyy,product[i][2]);
		            strcpy(product[i][2],product[j][2]);
		         	strcpy(product[j][2],qtyy);
		         	strcpy(pricee,product[i][3]);
		            strcpy(product[i][3],product[j][3]);
		         	strcpy(product[j][3],pricee);
		         	strcpy(totall,product[i][4]);
		            strcpy(product[i][4],product[j][4]);
		         	strcpy(product[j][4],totall);
		      		check=true;
		       	}
	    	}
    	} 
    	     for(i=0;i<n;i++){
				printf("%-15s %-15s %-15s %-15s$ %-15s\n",product[i][0],product[i][1],product[i][2],product[i][3],product[i][4]);
	           }
              	if(check==false)
			     	puts("Sort not Found");
				else
				   puts("Sort success");
	       }break;
	       case 8: {
	       	    system("cls");
				int add;
				bool check=false;
				puts("--------------[Add Information]---------------------");
				printf("Add more Information= "); scanf("%d",&add);
				for(i=n;i<n+add;i++){
					printf("-------Product # %d ---------\n",i+1);
					printf("Input Code= "); scanf("%s",&product[i][0]); 
					printf("Input Name= "); scanf("%s",&product[i][1]);
					printf("Input Qty= "); scanf("%s",&product[i][2]); 
					printf("Input Price= "); scanf("%s",&product[i][3]); 
					total=atoi(product[i][2])*atof(product[i][3]);
					sprintf(product[i][4],"%.2f",total);
					check=true;
				}
				if(check==false)
				puts("Add not success");
				else
				    n+=add;
					puts("Add success");
			}break;
			case 9: {
			      system("cls");	
		    }break;
	 	}
	}while(op!=10);
}

