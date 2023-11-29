#include<stdio.h>
#include<stdbool.h>
int main(){
	int arr[20];
	int i,j,n,search=0,svalue,dvalue,index,ivalue;
	printf("Input Number Array= ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Input Array[%d]= ",i+1);
		scanf("%d",&arr[i]);
	}
	//OutPut Array
	for(i=0;i<n;i++){
		printf("Array[%d]= %d\n",i+1,arr[i]);
	}
	//Delete Array
	bool check=false;
	printf("Input ID for Delete= "); scanf("%d",&dvalue);
	for(i=0;i<n;i++){
		if(dvalue==arr[i]){
			for(j=i;j<n;j++){
				arr[j]=arr[j+1];
			}
			n--;
			check=true;
		}
	}
		for(i=0;i<n;i++){
		printf("Array[%d]= %d\n",i+1,arr[i]);
	}
    if(check==false)
    	puts("Delete not success");
	else
	   puts("Delete success");	
}
