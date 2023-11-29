#include<stdio.h>
#include<stdbool.h>
int main()
{
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
	//insert array
	bool check=false;
	printf("Input Insert Value= "); scanf("%d",&ivalue);
    	for(i=0;i<n;i++){
		if(ivalue==arr[i]){
			for(j=n;j>=i;j--){
				arr[j]=arr[j-1];
			}
			n++;
	    	printf("Input new value= "); scanf("%d",&arr[i]);
			check=true;
		    break;
		}
	}
		for(i=0;i<n;i++){
		printf("Array[%d]= %d\n",i+1,arr[i]);
	}
	 if(check==false)
    	puts("Insert not success");
	else
	   puts("Insert success");

}
