#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
int main(){
	int i,n,op;
	int qty;
	float total,price;
	char product[20][5][15];
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
				        printf("\n--------------------------[Input Product]------------------------\n");
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
			     	printf("\n-----------------------------[Ouput Product]--------------------------\n");
				    printf("%-15s %-15s %-15s %-15s %-15s\n","Code","Name","Qty","Price","Total");
					for(i=0;i<n;i++){
					printf("%-15s %-15s %-15s %-15s$ %-15s\n",product[i][0],product[i][1],product[i][2],product[i][3],product[i][4]);
				}
			}break;	
			case 3 :{
						char scode[20][5][10];
						bool check=false;
						printf("\n---------------[Search Information]---------\n");
						printf("Input Code to search : "); scanf("%s",&scode[i][0]);
						for(i=0;i<n;i++){
					if(scode[i][0] == product[i][0]){
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
	 	}
	}while(op!=10);
}

