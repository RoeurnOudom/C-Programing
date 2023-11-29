#include<stdio.h>
#include<math.h>
int main(){
	float s1,s2,s3,s4,s5,total,avg;
	printf("Input Score1: "); scanf("%f",&s1);
	printf("Input Score2: "); scanf("%f",&s2);
	printf("Input Score3: "); scanf("%f",&s3);
	printf("Input Score4: "); scanf("%f",&s4);
	printf("Input Score5: "); scanf("%f",&s5);
	printf("__________________Student Score__________________\n");
	printf("Score1= %.2f\n",s1);
	printf("Score2= %.2f\n",s2);
	printf("Score3= %.2f\n",s3);
	printf("Score4= %.2f\n",s4);
	printf("Score5= %.2f\n",s5);
	total=s1+s2+s3+s4+s5;
	printf("Total= %.2f\n",total);
	avg=total/5;
	printf("Avgerag= %.2f\n",avg);
	if(avg > 90 && avg <=100){
       printf("Grade=A\n");
	}else if(avg > 80 && avg <=90){
		printf("Grade=B\n");
	}else if(avg > 70 && avg <=80){
	   printf("Grade=C\n");
	}else if(avg > 60 && avg <=70){
	   printf("Grade=D\n");
	}else if(avg > 50 && avg <=60){
	   printf("Grade=E\n");
	}else {
	   printf("Grade=F\n");
	   }
return 0;
}
