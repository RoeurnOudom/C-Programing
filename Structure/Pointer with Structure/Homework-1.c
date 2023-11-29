#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
struct Product{
	int code,qty;
	char name[60];
	float price,total;
};
struct Product Input(){
	struct Product *pro;
	pro=(struct Product*)malloc(sizeof(struct Product));
	printf("Input Code= "); scanf("%d",&(pro->code)); fflush(stdin);
	printf("Input Name= "); gets(pro->name);
	printf("Input Qty= "); scanf("%d",&pro->qty);
	printf("Input Price= "); scanf("%f",&pro->price);
	(pro->total)=(pro->qty)*(pro->price);
	return *pro;
}

void Output(struct Product Pro){
	printf("%-15d%-15s%-15d$%-15.2f%-15f\n",(Pro.code),(Pro.name),(Pro.qty),(Pro.price),(Pro.total));
}
void Header(){
	printf("%-15s%-15s%-15s%-15s%-15s\n","Code","Name","Qty","Price","Total");
}
int main(){
	struct Product ProArr[50];
	int i,j,n,op;
	do{
		printf("______________________[ P R O D U C T ]______________________\n");
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
		printf("Choose option on the menu= "); scanf("%d",&op);
		switch(op){
			case 1:	{
				printf("Input number of Product= "); scanf("%d",&n);
				
				for(i=0;i<n;i++){
					printf("======== Product %d ========\n",i+1);
					ProArr[i]=Input();
				}	
			}break;
			case 2 :{
				Header();
				for(i=0;i<n;i++){
					Output(ProArr[i]);
				}
				break;
			}
			case 3: {
				int var;
				bool check=false;
				printf("Search product by code= "); scanf("%d",&var);
				for(i=0;i<n;i++){
					if(ProArr[i].code==var){
						Header();
						Output(ProArr[i]);
						check=true;
						puts("Search Found");
						break;
					}
				}
			    	if(check==false)
					puts("Search not Found");
			}break;
			case 4: {
				char var[20];
				bool check=false;
				printf("Search product Name for Update= "); scanf("%s",&var);
				for(i=0;i<n;i++){
					if(stricmp(var,ProArr[i].name)==0){
						ProArr[i]=Input();
						check=true;
					}
				}
				if(check==false)
				puts("Search not Found");
				else
				puts("Update success");
			}break;
		    case 5: {
		    	bool check=false;
//				char var[20];
//				printf("Search product by name for delete= "); scanf("%s",&var);
//				for(i=0;i<n;i++){
//					if(stricmp(var,ProArr[i].name)==0){
//						for(j=i;j<n;j++){
//							ProArr[j].code = ProArr[j+1].code;
//							strcpy(ProArr[j].name,ProArr[j+1].name);
//							ProArr[j].qty = ProArr[j+1].qty;
//							ProArr[j].price = ProArr[j+1].price;
//							ProArr[j].total = ProArr[j+1].total;
//						}
//						n--;
//						check=true;
//					}
//				}
//				if(check==false)
//			     	puts("Delete not Success");
//				else
//				    puts("Delete success");	
                //Delete by index
				int d_index;
				printf("Input Index to delete : ");scanf("%d",&d_index);
				if(d_index<n){
					for(i=d_index;i<n;i++){
						ProArr[i].code = ProArr[i+1].code;
						strcpy(ProArr[i].name,ProArr[i+1].name);
						ProArr[i].qty = ProArr[i+1].qty;
						ProArr[i].price = ProArr[i+1].price;
						ProArr[i].total = ProArr[i+1].total;
					}
					n--;
					check=true;
				}
				if(check==false)
			     	puts("Delete not Success");
				else
				    puts("Delete success");	
			}break;
				case 6: {
				char svalue[20];
				bool check=false;
				printf("Search product by name for Insert= "); scanf("%s",&svalue);
				for(i=0;i<n;i++){
					if(stricmp(svalue,ProArr[i].name)==0){
						for(j=n;j>=i;j--){
							ProArr[j].code=ProArr[j-1].code;
							strcpy(ProArr[j].name,ProArr[j-1].name);
							ProArr[j].qty=ProArr[j-1].qty;
							ProArr[j].price=ProArr[j-1].price;
							ProArr[j].total=ProArr[j-1].total;
						}
						n++;
						ProArr[i]=Input();
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
		         int codee,qtyy,b=0;
		         char namee[30];
		         float pricee,totall;
		         for(i=0;i<n;i++){
		         	for(j=i+1;j<n;j++){
		         		if(ProArr[i].total<ProArr[j].total){
		         		codee=ProArr[i].code;
		         		ProArr[i].code=ProArr[j].code;
		         		ProArr[j].code=codee;
		         		strcpy(namee,ProArr[i].name);
		         		strcpy(ProArr[i].name,ProArr[j].name);
		         		strcpy(ProArr[j].name,namee);
		         		qtyy=ProArr[i].qty;
		         		ProArr[i].qty=ProArr[j].qty;
		         		ProArr[j].qty=qtyy;
		                pricee=ProArr[i].price;
						ProArr[i].price=ProArr[j].price;
						ProArr[j].price=pricee;
						totall=ProArr[i].total;
						ProArr[i].total=ProArr[j].total;
						ProArr[j].total=totall;
						b=1;
				    	}		
					 }
				 }
				 if(b==0)
			     	 puts("Sort not success");
				 else
				    puts("Sort success");
			}break;
			case 8: {
				int add,b=0;
				printf("Add more product= "); scanf("%d",&add);
				for(i=n;i<n+add;i++){
					printf("======== Product %d ========\n",i+1);
					ProArr[i]=Input();
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

