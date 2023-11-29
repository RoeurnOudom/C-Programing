#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	char *text;
	printf("Enter limit of the text: ");
	scanf("%d",&n);
	//allocation memory dynamically
	text=(char*)malloc(n*sizeof(char));
	printf("Enter text: ");
	scanf(" "); //clear input buffer
	gets(text);
	printf("Inputed text is: %s\n",text);
	//free memory
	free(text);
	return 0;
}
