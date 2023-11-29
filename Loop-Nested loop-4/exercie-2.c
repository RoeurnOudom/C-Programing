#include<stdio.h>
#include<math.h>
int main(){
	int op;
	float st,ed,pay,total;
	do{
	printf("1. Bicycle\n");
	printf("2. Motor\n");
	printf("3. Car\n");
	printf("Please Choose One= "); scanf("%d",&op);
	     	printf("Start Time: "); 
	        scanf("%f",&st);
	        printf("End Time: ");
	        scanf("%f",&ed);
	switch(op){
		case 1: { 
		     total=ed-st;
           	if(st >=6 && ed <=11){
	            	pay=300;
         	}else{
         		pay=500;
			 }
			 printf("Total: %.fH\n",total);
            printf("Payment: %.f riel\n",pay);
		}break;
		case 2: { 
	         	total=ed-st;
           	if(st >=6 && ed <=11){
	            	pay=500;
         	}else{
         		pay=1000;
			 }
			 printf("Total: %.fH\n",total);
            printf("Payment: %.f riel\n",pay);
		}break;
		case 3: {
		       	total=ed-st;
           	if(st >=6 && ed <=11){
	            	pay=2000;
         	}else{
         		pay=5000;
			 }
			 printf("Total: %.fH\n",total);
            printf("Payment: %.f riel\n",pay);
		}break;
}
}while(getch()!=13);
return 0;
}
