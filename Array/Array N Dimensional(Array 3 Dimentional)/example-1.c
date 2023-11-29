#include<stdio.h>
int main(){
	int i,j,k;
	int a[2][2][3]={         // block,row,col,size
	      {{100,200,300},{10,20,30}},
	      {{1,2,3},{1000,2000,3000}}
	};
	for(k=0;k<2;k++){ // block
		for(i=0;i<2;i++){ //row
			for(j=0;j<3;j++){ //col
				printf("%d\t",a[k][i][j]);
			}
			puts("");
		}
		puts("");
	}
}
