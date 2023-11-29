#include<stdio.h>
int main(){
	int i,j,rull_num;
	int r,c;
	int id[5][5];
	char name[5][5][30],sex[5][5][10],address[5][5][50];
	printf("Input number of Row= "); scanf("%d",&r); //2
	printf("Input number of Cloumn= "); scanf("%d",&c); //3
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("________________Person %d____________________________\n",rull_num +=1);
			printf("Input ID= "); scanf("%d",&id[i][j]); 
			printf("Input Name= "); scanf("%s",&name[i][j]);
			printf("Input Gender= "); scanf("%s",&sex[i][j]); 
			printf("Input Address= "); scanf("%s",&address[i][j]); 

		}
	}
	for(i=0;i<r;i++){
		printf("\n");
		
		for(j=0;j<c;j++){
			printf("\t%d\t%s\t%s\t%s\n",id[i][j],name[i][j],sex[i][j],address[i][j]);
		}
	}
}
