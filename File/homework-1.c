#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<windows.h>
int main(){
	char status[20];
	int op;
	int code,qty,scode,c,n,i,j,ucode,dcode,icode;
	char name[20];
	float price,total;
	FILE * pro;
	do{
		printf("______________________[ P R O D U C T ]______________________\n");
		printf("\t1.Input\n");
		printf("\t2.Output\n");
		printf("\t3.Search\n");
		printf("\t4.Update\n");
		printf("\t5.Delete\n");
		printf("\t6.Insert\n");
		printf("\t7.Add\n");
		printf("\t8.Clear\n");
		printf("Choose option on the menu= "); scanf("%d",&op);
		switch(op){
			case 1 : {
						pro=fopen("Pro.txt","w");
						printf("Enter the number of product you want to enter: ");
						scanf("%d",&n);
						if(pro == NULL){
						printf("Error!");
						exit(1);
						}
						for(i=0;i<n;i++){
							printf("\nEnter the details of product %d \n\n",i+1);
							printf("Input Code= "); scanf("%d",&code);fflush(stdin);
							printf("Input Name= "); scanf("%s",&name);
							printf("Input Qty= "); scanf("%d",&qty);
							printf("Input Price= "); scanf("%f",&price);
							total=qty*price;
							fprintf(pro,"%d %s %d %f %f\n",code,name,qty,price,total);
						}
						fclose(pro);
		    }break;
		   	case 2 : {
						pro=fopen("Pro.txt","r");
						if(pro==NULL){
						printf("Error opening file\n");
						exit(1);
					}
						printf("Output Product: \n\n");
						printf("%-15s%-15s%-15s%-15s%-15s\n","Code","Name","Qty","Price","Total");
						while((fscanf(pro,"%d %s %d %f %f",&code,&name,&qty,&price,&total))!=EOF){
						printf("%-15d%-15s%-15d%-15f%-15f\n",code,name,qty,price,total);
			    	}
						fclose(pro);
		    }break;
		    case 3 : {
						pro = fopen("Pro.txt","r");
						bool check=false;
					    printf("Input Code for Search: ");
						scanf("%d",&scode);
						if(pro == NULL){
							printf("Error!");
							exit(1);
					    }
						printf("%-15s%-15s%-15s%-15s%-15s\n","Code","Name","Qty","Price","Total");
						while((fscanf(pro,"%d %s %d %f %f",&code,name,&qty,&price,&total))!=EOF){
							if(scode==code){
						    	printf("%-15d%-15s%-15d%-15f%-15f\n",code,name,qty,price,total);
						    	check=true;
			        	    }
				     	}
						if(check==false){
							printf("Search not Found\n");
						}
						else{
							printf("Search Found\n");
						}
						fclose(pro);
		    }break;
		    case 4 : {
						FILE * update_pro;
						update_pro = fopen("Update.txt","w");
						pro = fopen("Pro.txt","r");
						bool check=false;
					    printf("Input code for Update: ");
						scanf("%d",&ucode);
						if(update_pro == NULL){
						printf("Error!");
						exit(1);
						}
						int i=0;
						while((fscanf(pro,"%d %s %d %f %f",&code,&name,&qty,&price,&total))!=EOF){
							if(ucode==code){
								printf("\nEnter the details of product %d \n\n",i+1);
								printf("Input Code= "); scanf("%d",&code);
								printf("Input Name= "); scanf("%s",&name);
								printf("Input Qty= "); scanf("%d",&qty);
								printf("Input Price= "); scanf("%f",&price);
								total=qty*price;
								fprintf(update_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
								check=true;
							}
							else{
								fprintf(update_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
							}
						}
						fclose(update_pro);
						fclose(pro);
						remove("Pro.txt");
						rename("Update.txt","Pro.txt");
						if(check==false){
							printf("Search not Found\n");
						}
						else{
							printf("Update success\n");
						}
			}break;
			case 5 : {
				         	FILE * delete_pro;
							delete_pro = fopen("Delete.txt","w");
							pro = fopen("Pro.txt","r");
							bool check=false;
						    printf("Input Code for Delete: ");
							scanf("%d",&dcode);
							if(delete_pro == NULL){
							printf("Error!");
							exit(1);
							}
							while((fscanf(pro,"%d %s %d %f %f",&code,&name,&qty,&price,&total))!=EOF){
								if(dcode==code){
									check=true;
								}
								else{
									fprintf(delete_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
								}
							}
								if(check==false){
								printf("Delete not Suceess\n");
							}
							else{
								printf("Delete Suceess\n");
							}
							fclose(delete_pro);
							fclose(pro);
							remove("Pro.txt");
							rename("Delete.txt","Pro.txt");
		    }break;
		    case 6 : {
				            FILE * insert_pro;
							insert_pro = fopen("Insert.txt","w");
							pro = fopen("Pro.txt","r");
							bool check=false;
						    printf("Input Code for insert: ");
							scanf("%d",&icode);
							if(insert_pro == NULL){
							printf("Error!");
							exit(1);
							}
							while((fscanf(pro,"%d %s %d %f %f",&code,&name,&qty,&price,&total))!=EOF){
								if(icode==code){
									fprintf(insert_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
									printf("\nEnter the details of product %d \n\n",i+1);
									printf("Input Code= "); scanf("%d",&code);
									printf("Input Name= "); scanf("%s",&name);
									printf("Input Qty= "); scanf("%d",&qty);
									printf("Input Price= "); scanf("%f",&price);
									total=qty*price;
									fprintf(insert_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
									j=1;
									check=true;
								}
								else{
									fprintf(insert_pro,"%d %s %d %f %f\n",code,name,qty,price,total);
								}
							}
								if(check==false){
								printf("Insert not Suceess\n");
							}
							else{
								printf("Insert Suceess\n");
							}
							fclose(insert_pro);
							fclose(pro);
							remove("Pro.txt");
							rename("Insert.txt","Pro.txt");
		    }break; 
		    case 7 : {
						FILE * pro;
						pro=fopen("Pro.txt","a");
						printf("Enter the number of product you want to enter: ");
						scanf("%d",&n);
						if(pro == NULL){
						printf("Error!");
						exit(1);
						}
						for(i=0;i<n;i++){
							printf("\nEnter the details of product %d \n\n",i+1);
							printf("Input Code= "); scanf("%d",&code);fflush(stdin);
							printf("Input Name= "); scanf("%s",&name);
							printf("Input Qty= "); scanf("%d",&qty);
							printf("Input Price= "); scanf("%f",&price);
							total=qty*price;
							fprintf(pro,"%d %s %d %f %f\n",code,name,qty,price,total);
						}
						fclose(pro);
		    }break;
		    case 8: {
		            system("cls");
			}break;
	}
	printf("Continue...(yes or no)?"); scanf("%s",&status);
	}while(stricmp(status,"yes")==0);
}
