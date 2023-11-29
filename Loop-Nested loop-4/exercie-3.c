#include<stdio.h>
#include<math.h>
int main(){
	int op,tea=1;
	float riel,dollar,total,pay;
	char pt;
	do{
		printf("1. Tea (1$)\n");
		printf("2. Milk Tea (3$)\n");
		printf("3. Grean Tea (2$)\n");
	    printf("Please Choose One= "); scanf("%d",&op);
      	switch(op){
      	case 1: {
			   printf("Input Riel ot Dollar (r-d)= ");
			  fflush(stdin); scanf("%c",&pt);
	    switch(pt){
	    case 'r':{
	    	    printf("Input Money Riel= ");
	    	    scanf("%f",&riel);
	    	    total=tea*4000;{
				pay=riel-total;
		}
		printf("Total: %.f\n",total);
		printf("Cash Recieve: %.f riel\n",total);
        printf("Cash Retrun: %.f riel\n",pay);
		}break;
	     case 'd' :  {
		        printf("Input Money Dollar= ");
				scanf("%f",&dollar);
				total=tea;
			   	pay=dollar-tea;
		   printf("Total: %.f\n",total);
		   printf("Cash Recieve: %.f$\n",total);
	       printf("Cash Return: %.f$\n",pay);
		}break;
    	}
        }break;
           	case 2: {
			   printf("Input Riel ot Dollar (r-d)= ");
			   fflush(stdin); scanf("%c",&pt);
	    switch(pt){
	    case 'r':{
	    	    printf("Input Money Riel= ");
	    	    scanf("%f",&riel);
	    	    total=tea*12000;{
				pay=riel-total;
		}
		printf("Total: %.f\n",total);
		printf("Cash Recieve: %.f riel\n",total);
        printf("Cash Retrun: %.f riel\n",pay);
		}break;
	     case 'd' :  {
		        printf("Input Money Dollar= ");
				scanf("%f",&dollar);
				total=tea;
			   	pay=dollar-tea;
		   printf("Total: %.f\n",total);
		   printf("Cash Recieve: %.f$\n",total);
	       printf("Cash Return: %.f$\n",pay);
		}break;
    	}
        }break;
           	case 3: {
			   printf("Input Riel ot Dollar (r-d)= ");
			  fflush(stdin); scanf("%c",&pt);
	    switch(pt){
	    case 'r':{
	    	    printf("Input Money Riel= ");
	    	    scanf("%f",&riel);
	    	    total=tea*8000;{
				pay=riel-total;
		}
		printf("Total: %.f\n",total);
		printf("Cash Recieve: %.f riel\n",total);
        printf("Cash Retrun: %.f riel\n",pay);
		}break;
	     case 'd' :  {
		        printf("Input Money Dollar= ");
				scanf("%f",&dollar);
				total=tea;
			   	pay=dollar-tea;
		   printf("Total: %.f\n",total);
		   printf("Cash Recieve: %.f$\n",total);
	       printf("Cash Return: %.f$\n",pay);
		}break;
    	}
        }break;
        
        
}
}while(getch()!=13);
return 0;
}
