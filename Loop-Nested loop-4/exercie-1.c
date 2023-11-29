#include<stdio.h>
#include<math.h>
int main(){
   int op,rate;
   float dollar,riel,bath;
   do{
   printf("1.Exchange Riel to Dollar (4.058 KHR)\n");
   printf("2.Exchange Dollar to Riel (4.068 KHR)\n");
   printf("3.Exchange Riel to Bath (116.70 KHR)\n");
   printf("Please Choose One= "); scanf("%d",&op);
   	switch(op){
		case 1: { //4.058 KHR
			   printf("Input Riel= ");
               scanf("%f",&riel);
               printf("Rate of Dollar= ");
               scanf("%d",&rate);{
			   dollar=riel/rate;
			}
			printf("Amount of Dollar= %.2f$\n",dollar);
		}break;
		case 2: { //4.068 KHR
			   printf("Input Dollar= ");
               scanf("%f",&dollar);
              printf("Rate of Riel= ");
			  scanf("%d",&rate); {
			   riel=dollar*rate;
			}
			printf("Amount of Riel= %.2f\n",riel);
		}break;
		case 3: { //116.70 KHR
			   printf("Input Riel= ");
               scanf("%f",&riel);
               printf("Rate of Bath= ");
               scanf("%d",&rate); {
			   bath=riel/rate;
			}
			printf("Amount of Bath= %.2f\n",bath);
		}break;
	}
}while(getch()!=13);
return 0;
}
