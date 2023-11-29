#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#define str_size 100 //Declear the maximum size of the sring
void main(){
	char str[str_size];
	int alp,digit,splch,i;
	alp=digit=splch=i=0;
	printf("\n\nCount total number of alphabets, digit and special charecter: \n");
	printf("------------------------------------------------------------\n");
	printf("Input the string: ");
	fgets(str,sizeof str,stdin);
	/* Checks each charecter of string*/
	while(str[i]!='\0'){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			alp++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit++;
		}
		else {
			splch++;
		}
		i++;
	}
	printf("Number of Alpabets(a-z,A-Z)in the string is: %d\n",alp);
	printf("Number of Digits(0-9)in the string is: %d\n",digit);
	printf("Number of Special charecters in the string is: %d\n",splch);
	
}
