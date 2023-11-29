#include<stdio.h>
#include<string.h>
struct person{
	char name[5];
	int id;
}per;
int main(){
	 per.id=1001;
	strcpy(per.name,"Kaka");
	printf("%d",per.id);
	printf("%s",per.name);
return 0;
}
