#include<stdio.h>
int main(){
	int i,j,k;
	char a[2][2][3][50]={
	{{"1","Sok Jita","P-P"}, {"2","Sok Dara","TK"}},
	{{"3","Heng Lina","KP"}, {"4","Seng Lyna","P-P"}},
  };
  for(k=0;k<2;k++){
  	printf("Block %d\n",k+1);
  	for(i=0;i<2;i++){
  		for(j=0;j<3;j++){\
  			printf("%s\t",a[k][i][j]);
		  }
		  puts("");
	  }
  }
}
