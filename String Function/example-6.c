#include<stdio.h>
#include<string.h>
void main(){
	char name[25][50],temp[25];
	int n,i,j;
	printf("\n\nScore the string of array using bubble sort: \n");
	printf("-------------------------------------------------\n");
    printf("Input number of string: ");
    scanf("%d",&n);
    printf("Input string %d :\n",n);
    for(i=0;i<=n;i++){
    	fgets(name[i], sizeof name,stdin);
	}
	/*logic bubble sort */
	for(i=1;i<=n;i++)
	for(j=0;j<=n-i;j++)
	if(strcmp(name[j],name[j+1])>0){
	 strcpy(temp,name[j]);
	 strcpy(name[j],name[j+1]);
	 strcpy(name[j+1],temp);	
	}
	printf("The String appears after sorting: \n");
	for(i=0;i<=n;i++)
	printf("%s\n",name[i]);
}
