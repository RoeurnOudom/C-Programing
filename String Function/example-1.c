#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char str[50];
	printf("\n\nAccept a string from keyboard: \n");
	printf("--------------------------------------\n");
	printf("Input the string: ");
	fgets(str,sizeof str,stdin);
	printf("The String you entered is: %s\n",str);
}
