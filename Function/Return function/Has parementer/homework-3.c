#include<stdio.h>
#include<conio.h>
int sum1(){
	int i,n,sum=0;
	printf("Input N= "); scanf("%d",&n);
	printf("1. ");
	for(i=1;i<=n;i++){
		printf("%d+",i);
		sum=sum+i;
	}
	printf("\b=%d\n",sum);
    return sum;
}
int sum2(){
	int i,n,sum=0;
	printf("Input N= "); scanf("%d",&n);
	printf("2. ");
	for(i=2;i<=n;i=i+2){
		printf("%d+",i);
		sum=sum+i;
	}
	printf("\b=%d\n",sum);	
	return sum;
}
int sum3(){
	int i,n,sum=0;
	printf("Input N= "); scanf("%d",&n);
	printf("3. ");
	for(i=3;i<=n;i=i+2){
	   printf("%d+",i);
	   sum=sum+i;
	}
	printf("\b=%d\n",sum);
	return sum;
}
int main(){
	int i,n;
	printf("1. 1+2+3+...+N\n");
	printf("2. 2+4+6+...+N\n");
	printf("3. 3+5+7+...+N\n");
	sum1(n);
	sum2(n);
	sum3(n);
	return 0;
}
