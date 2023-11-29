#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
	int n,i,*ptr,op;
	do{
		printf("______________________[Pointer ]______________________\n");
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
				        printf("\n----------------[Input Pointer]--------------\n");
			    	    printf("Input N= "); scanf("%d",&n);
				        ptr=(int*)calloc(n,sizeof(int));
				        for(i=0;i<n;i++){
				        	printf("Ptr[%d]= ",i);
				        	scanf("%d",(ptr+i));
						}
					} break; 
			case 2: {
			     	printf("\n ------------------[Ouput Pointer]----------\n");
					for(i=0;i<n;i++){
						printf("Ptr[%d]= %d\n",i,*(ptr+i));
				}
			}break;
			case 3 :{
				        int svalue;
						bool check=false;
						printf("\n---------------[Search Pointer]---------\n");
						printf("Input Value to search : "); scanf("%d",&svalue);
						for(i=0;i<n;i++){
					if(svalue==*(ptr+i)){
						printf("Ptr[%d]= %d\n",i,*(ptr+i));
						printf("Search Found !!\n");
						check=true;
					}
				}
				if(check==false){
					printf("Search Not Found !!\n");
				}
			}break;
			case 4: {
				    bool check=false;
			     	int uvalue;
					printf("-----------------[Update Pointer]---------------\n");
					printf("\nSearch by value for Update = ");scanf("%d",&uvalue);
			    	for(i=0;i<n;i++){
		            if(uvalue==*(ptr+i)){
					    printf("Input New Value: "); scanf("%d",(ptr+i));
					    printf("Update Success\n");
						check=true;
				}
			}
	             	if(check==false){
	             	printf("Update Not Success !!\n");	
				}
		        	
			}break;
			case 5: {
				   int dvalue;
			     	printf("---------------[Delete Pointer]---------------\n");
			     	bool check=false;
	                printf("Input index for Delete= "); scanf("%d",&dvalue);
		             	if(dvalue<n){
			          		for(i=dvalue;i<n;i++){
					     	   *(ptr+i)= *(ptr+(i+1));
						     }
						    n--;
					    	check=true;
			           	}
	              if(check==false)
	             	puts("Delete not success");
		         else
		           puts("Delete success");	
		    }break;
		    case 6: {
				int insert;
				bool check=false;
				printf("\n---------------[Insert Pointer]---------\n");
				printf("Search by index for Insert= "); scanf("%d",&insert);
					if(insert<n){
						for(i=n;i>insert;i--){
							    *(ptr+i)= *(ptr+(i-1));
						}
						printf("Input New Value: "); scanf("%d",(ptr+i));
						n++;
						check=true;
					}
					if(check==false)
			     	puts("Insert not success");
				else
				    puts("Insert success");	
			}break;
			case 7:{
			        int temp,j;
					bool check=false;
					printf("\n---------------[Sort Pointer]---------\n");
					for(i=0;i<n;i++){
						for(j=i+1;j<n;j++){
							if(*(ptr+i)<*(ptr+j)){
								temp=*(ptr+i);
								*(ptr+i)=*(ptr+j);
								*(ptr+j)=temp;
								check=true;
							}
						}
					}
					    for(i=0;i<n;i++){
						printf("Ptr[%d]= %d\n",i,*(ptr+i));
				      }
					if(check==false)
			     	puts("Sort not success");
				else
				    puts("Sort success");	
			}break;
			case 8: {
				int add;
				bool check=false;
				puts("--------------[Add Pointer]---------------------");
				printf("Add more number= "); scanf("%d",&add);
				for(i=n;i<n+add;i++){
					printf("Ptr[%d]= ",i); scanf("%d",(ptr+i));
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
		    default: printf("Please choose Again\n");
	}
	}while(op!=10);
}
