#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
	char str[100]; /*Declear a string of size 100*/
	int l,i;
	printf("\n\nPrint individual charecter of string in revers order: \n");
	printf("----------------------------------------------------------\n");
	printf("Input the string: ");
	fgets(str,sizeof str,stdin);
	l=strlen(str);
	printf("The charecter of the string in revers are: \n");
    for(i=l;i>=0;i--)  {
		printf("%c",str[i]);
	}
	printf("\n");
}
