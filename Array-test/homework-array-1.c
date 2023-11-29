#include<stdio.h>
#include<stdbool.h>
int main(){
	    int arr[20];
	    int op,i,j,n,n1,temp;
	    int sum=0,u=0,search=0,s=0;
      	int uvalue,svalue,dvalue,index;
	do{ 
		printf("___________________[ Array ]_______________\n");
		printf("\t1.Input\n");
		printf("\t2.Output\n");
		printf("\t3.Search\n");
		printf("\t4.Update\n");
		printf("\t5.Delete\n");
		printf("\t6.Insert\n");
		printf("\t7.Sort\n");
		printf("\t8.Add\n");
		printf("\t9.Clear\n");
		printf("\t10.Exit\n");
		printf("Choose option on the menu(1-10)= "); scanf("%d",&op);
		switch(op){
			case 1: {
			    	printf("\n---------------[Input Array]---------\n");
	               	printf("Input Number Array= ");
                   	scanf("%d",&n);
                   	for(i=0;i<n;i++){
	               	printf("Input Array[%d]= ",i+1);
	                scanf("%d",&arr[i]);
	            }
		        	}break;
		    case 2: {
		    	    printf("\n---------------[Ouput Array]----------\n");
		           	for(i=0;i<n;i++){
	            	printf("Array[%d]= %d\n",i+1,arr[i]);
                 	}
			}break;
			case 3: {
                 	printf("\n---------------[Search Array]----------\n");
	             	printf("\nInput Search Value = ");scanf("%d",&svalue);
	                for(i=0;i<n;i++){
	            	if(svalue==arr[i]){
		        	printf("\nSearch Found [%d]= %d\n",i+1,svalue);
		         	search=1;
	        	}
	      }
	                if(search==0){
	             	printf("\nSearch Not Found\n");
                	}	
				}break;
			case 4:  {
	               printf("---------------[Update Array]---------------\n");
	            	printf("\nInput Value To Update = ");scanf("%d",&uvalue);
                 	for(i=0;i<n;i++){
		            if(uvalue==arr[i]){
		        	printf("Input New Value = ");scanf("%d",&arr[i]);
		        	printf("Update Success\n");
		        	u=1;
	        	}
        	}
                	if(u==0){
	            	printf("Update not success\n");
	                }
				 }break;
			case 5: {
			     	printf("---------------Delete Array---------------\n");
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
              if(check==false)
          	puts("Delete not success");
	         else
	        puts("Delete success");	
		 }break;
		   case 6: {
		        	printf("---------------[Insert Array]---------------\n");
		          	bool check=false;
                	printf("Input index to insert= "); scanf("%d",&index);
                 	if(index<n){
	            	for(i=n;i>=index;i--){
	        		arr[i]=arr[i-1];
	           	}
	                  	n++;
	            	printf("Input new value= "); scanf("%d",&arr[i]);
	             	check=true;
             	}
                 	for(i=0;i<n;i++){
	             	printf("Array[%d]= %d\n",i+1,arr[i]);
         	}
             	 if(check==false)
             	puts("Insert not success");
            	else
	            puts("Insert success"); 
	        }break;
	        case 7: {
	            	puts("------------=-[After Sort]---------------------");
	                for(i=0;i<n;i++){
	              	for(j=i+1;j<n;j++){
	          		if(arr[i]<arr[j]){
		      		temp=arr[i];
		      		arr[i]=arr[j];
		       		arr[j]=temp;
		      		s=1;
		       	}
	    	}
    	}
              	if(s==0)
             	puts("Sort not success");
            	else
	            puts("Sort success"); 
	            for(i=0;i<n;i++){
	        	printf("Array[%d]= %d\n",i+1,arr[i]);
	           }
		  }break;
		  case 8: {
		         	puts("--------------Add more array-------------------");
                  	printf("Add more array= ");
	                scanf("%d",&n1);
                  	for(i=n;i<n+n1;i++){
             		printf("Input Array= "); 
             		scanf("%d",&arr[i]);
               	}
                    puts("----------------------After Add-----------------------------");
                  	for(i=0;i<n+n1;i++){
	               	printf("Array[%d]= %d\n",i+1,arr[i]);
	               	s=1;
	           } 
	               n=n+n1;
	               if(s==0)
	               puts("Add not success");
                	else
                	puts("Add success");
				 }break;
			case 9: {
			      system("cls");	
				  }break;
	}
	}while(op!=10);
}
