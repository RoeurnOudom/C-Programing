#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	int code[20];
	char name[20][30];
	int qty[20];
	float price[20],total[20];
	double pay[20];
	int i,n,j,op;
	void Input(){
		printf("Input code= "); scanf("%d",&code[i]);
		printf("Input Name= "); scanf("%s",&name[i]);
		printf("Input Qty= "); scanf("%d",&qty[i]);
		printf("Input Price= "); scanf("%f",&price[i]);
	}
	float Total(){
		total[i]=qty[i]*price[i];
		return total[i];
	}
	double Payment(){
		if(Total()>=1 && Total()<=20){
			pay[i]=Total()-(Total()*5)/100;
		}
		else if(Total()>20 && Total()<=30){
			pay[i]=Total()-(Total()*10)/100;
		}else{
		pay[i]=Total()-(Total()*15)/100;
		}
		return pay[i];
	}
	void Head(){
	   printf("\tCode\tName\tQty\tPrice\tTotal\tPayment\n");
	}
	void Output(){
		printf("\t%d\t%s\t%d\t%.2f$\t%.2f$\t%.2lf$\n",code[i],name[i],qty[i],price[i],Total(),Payment());
	}
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
		printf("\t9.Cash money\n");
		printf("\t10.Clear\n");
		printf("\t11.Exit\n");
		printf("Choose option on the menu= "); scanf("%d",&op);
		switch(op){
			case 1: {
				printf("Input number of Product= "); scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("_____________Number of Product %d#____________________\n",i+1);
					Input();
				}	
			}break;
			case 2: {
			    Head();
			    for(i=0;i<n;i++){
			   	Output();
			}
			}break;
			case 3: {
				int var;
				bool check=false;
				printf("Search product by code= "); scanf("%d",&var);
				for(i=0;i<n;i++){
					if(code[i]==var){
						Head();
						Output();
						check=true;
						puts("Search Found");
					}
				}
			    	if(check==false)
					puts("Search not Found");
			}break;
			case 4: {
				char var[20];
				bool check=false;
				printf("Search product by name for Update= "); scanf("%s",&var);
				for(i=0;i<n;i++){
					if(stricmp(var,name[i])==0){
						Input();
						check=true;
					}
				}
				if(check==false)
				puts("Search not Found");
				else
				puts("Update success");
			}break;
			case 5: {
				char var[20];
				bool check=false;
				printf("Search product by name for delete= "); scanf("%s",&var);
				for(i=0;i<n;i++){
					if(stricmp(var,name[i])==0){
						for(j=i;j<n;j++){
							code[j]=code[j+i];
							stricmp(name[j],name[j+i]);
							qty[j]=qty[j+i];
							price[j]=price[j+i];
							total[j]=total[j+i];
							pay[j]=pay[j=i];
						}
						n--;
						check=true;
					}
				}
				if(check==false)
			     	puts("Search not Found");
				else
				    puts("Delete success");	
			}break;
			case 6: {
				char var[20];
				bool check=false;
				printf("Search product by name for Insert= "); scanf("%s",&var);
				for(i=0;i<n;i++){
					if(stricmp(var,name[i])==0){
						for(j=n;j>=i;j--){
							code[j]=code[j-i];
							stricmp(name[j],name[j-i]);
							qty[j]=qty[j-i];
							price[j]=price[j-i];
							total[j]=total[j-i];
							pay[j]=pay[j-i];
						}
						n++;
						Input();
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
		         float pricee,totall,payy;
		         for(i=0;i<n;i++){
		         	for(j=i+1;j<n;j++){
		         		if(price[i]<price[j]){
		         		codee=code[i];
		         		code[i]=code[j];
		         		code[j]=codee;
		         		strcpy(namee,name[i]);
		         		strcpy(name[i],name[j]);
		         		strcpy(name[j],namee);
		         		qtyy=qty[i];
		         		qty[i]=qty[j];
		         		qty[j]=qtyy;
		                pricee=price[i];
						price[i]=price[j];
						price[j]=pricee;
						totall=total[i];
						total[i]=total[j];
						total[j]=totall;
						payy=pay[i];
						pay[i]=pay[j];
						pay[j]=payy;
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
					Input();
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
					double sum=0,cash_return=0,cash_recieve=0;
					char xop[30];
					for(i=0;i<n;i++){
					sum+=pay[i];	
					}
					printf("All Amount= %.2lf $\n",sum);
					printf("->By= "); scanf("%s",&xop);
					if(stricmp(xop,"Dollar")==0){
						while(true){
							printf("Cash Recieve Money= "); scanf("%lf",&cash_recieve);
							if(cash_recieve>sum){
								cash_return=cash_recieve-sum;
								printf("Cash Return Money= %.2lf $\n",cash_return);
								break;
							}
						}
						
					}
					if(stricmp(xop,"KHR")==0){
						while(true){
							printf("Cash Recieve Money= "); scanf("%.lf",&cash_recieve);
							if(cash_recieve>sum){
								cash_return=cash_recieve-sum*4100;
								printf("Cash Return Money= %.2lf KHR\n",cash_return);
								system("pause");
								break;
							}
						}
					}
				 system("pause");
			   }break;
		    case 10: {
		    	system("cls");	
			}break;
		}
	}while(op!=11);
}
