#include<stdio.h>
#include<math.h>
int main(){
	float nuse,ouse,total,pay;
	printf("Input New Use: "); scanf("%f",&nuse);
	printf("Input Old Use: "); scanf("%f",&ouse);
	total=nuse-ouse;
	if(total >=1 && total <=10){
		pay=total*350;
	}
	    else if(total >10 && total <=20){
		pay=10*350+(total-10)*450;
	}
		else if(total >20 && total <=30){
		pay=10*350+10*450+(total-20)*550;
	}
		else if(total >30 && total <=40){
		pay=10*350+10*450+10*550+(total-30)*650;
	}
		else if(total >40 && total <=50){
		pay=10*350+10*450+10*550+10*650+(total-40)*750;
	}
	    else if(total >50 && total <=60){
		pay=10*350+10*450+10*550+10*650+10*750+(total-50)*850;
    }
       else{
       	   pay=10*350+10*450+10*550+10*650+10*750+10*850+(total-60)*950;
    }
    printf("Total: %.2f KW\n",total);
    printf("Payment: %.2f rial\n",pay);
return 0;
}
