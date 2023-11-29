#include<stdio.h>
#include<stdlib.h>
void main(){
	char str[100]; /*Declear a string of size 100*/
	int l=0;
	printf("\n\nSeperate the individual charecters from a string: \n");
	printf("------------------------------------------------------\n");
	printf("Input the string: ");
	fgets(str,sizeof str,stdin);
	printf("The charecter of the string are: \n");
    while(str[l]!='\0'){
	printf("%c ",str[l]);
    l++;
    }
    printf("\n");
}
