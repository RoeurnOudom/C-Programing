#include<stdio.h>
int main(){
	int i,j;
	char a[4][5][50]={
	{"1","Sok Dara","Male","20","PP"},
	{"2","Sok Jita","Female","18","TK"},
    {"1","Seng Lyna","Female","25","KPS"},
    {"1","Heng Sopheak","Male","30","PP"},
	};
	for(i=0;i<4;i++){
		printf("\n");
		for(j=0;j<5;j++){
			printf("%s\t",a[i][j]);
		}
	}
}
