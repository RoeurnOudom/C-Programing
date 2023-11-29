#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
struct Dictionary{
	char word[20];
	char description[20];
	char speech[20];
};
struct Dictionary dic[20];
int i,n,j;
void Input(){
	printf("Input Word= ");
	scanf("%s",&dic[i].word);
	printf("Input Speech= ");
	scanf("%s",&dic[i].speech);
	printf("Input Description= ");
	scanf("%s",&dic[i].description);	
}
void Header(){
	printf("%-15s%-15s%-15s\n","Word","Speech","Decripton");
}
void Output(){
   	printf("%-15s%-15s%-15s\n",dic[i].word,dic[i].speech,dic[i].description);
} 
int main(){
	char op;
	char status[20];
	int b=0;
	do{
		printf("______________________[ D I C T I O N A R Y ]______________________\n");
		printf("\tA.Input\n");
		printf("\tB.Output\n");
		printf("\tC.Search\n");
		printf("\tD.Update\n");
		printf("\tE.Delete\n");
		printf("\tF.Insert\n");
		printf("\tG.Sort\n");
		printf("\tH.Add\n");
		printf("\tI.Clear\n");
		printf("\tJ.Exit\n");
		printf("Choose option on the menu= "); fflush(stdin); scanf("%c",&op);
		switch(op){
			case 'a':
			case 'A': {
		            printf("Input Number of Dictionary= "); scanf("%d",&n);
		            for(i=0;i<n;i++){
		            	printf("...............Words %d..............\n",i+1);
		            	Input();
					}
			}break;
			case 'b':
			case 'B': {
				    printf("...............Output..............\n");
				    Header();
				    for(i=0;i<n;i++){
				     Output();	
					}
			}break;
			case 'c':
			case 'C': {
				printf("...............Search..............\n");
			    char sword[20];
				bool check=false;
				printf("Input Word to Search= "); scanf("%s",&sword);
				for(i=0;i<n;i++){
					if(stricmp(sword,dic[i].word)==0){
						Header();
						Output();
						check=true;
						puts("Search Found");
					}
				}
			    	if(check==false)
					puts("Search not Found");
			}break;
			case'd':
			case 'D': {
				printf("...............Update..............\n");
				char uword[20];
				bool check=false;
				printf("Search Dictionary by Word for Update= "); scanf("%s",&uword);
				for(i=0;i<n;i++){
					if(stricmp(uword,dic[i].word)==0){
						Input();
						check=true;
					}
				}
				if(check==false)
				puts("Search not Found");
				else
				puts("Update success");
			}break;
			case'e':
			case 'E': {
				printf("...............Delete..............\n");
				char dword[20];
				bool check=false;
				printf("Search dictionary by Word for Delete= "); scanf("%s",&dword);
				for(i=0;i<n;i++){
					if(stricmp(dword,dic[i].word)==0){
						for(j=i;j<n;j++){
							stricmp(dic[j].word,dic[j+i].word);
							stricmp(dic[j].speech,dic[j+i].speech);
							stricmp(dic[j].description,dic[j+i].description);
						}
						n--;
						check=true;
					}
				}
				if(check==false)
			     	puts("Search not Found");
				else
				    puts("Delete success");	
			}break;
			case'f':
			case 'F': {
				printf("...............Insert..............\n");
				char inword[20];
				bool check=false;
				printf("Search product by name for Insert= "); scanf("%s",&inword);
				for(i=0;i<n;i++){
					if(stricmp(inword,dic[i].word)==0){
						for(j=n;j>=i;j--){
							strcpy(dic[j].word,dic[j-1].word);
							strcpy(dic[j].speech,dic[j-1].speech);
							strcpy(dic[j].description,dic[j-1].description);
						}
						n++;
						Input();
						check=true;
						break;
					}
				}
					if(check==false)
			     	puts("Search not Found");
				else
				    puts("Insert success");	
			}break;
			case'g':
			case 'G': {
		         int b=0;
		         char wordd[30];
		         char speechh[30];
		         char descriptionn[30];
		         for(i=0;i<n;i++){
		         	for(j=i+1;j<n;j++){
		         		if(dic[i].word<dic[j].word){
		         		strcpy(wordd,dic[i].word);
		         		strcpy(dic[i].word,dic[j].word);
		         		strcpy(dic[j].word,wordd);
		         		strcpy(speechh,dic[i].speech);
		         		strcpy(dic[i].speech,dic[j].speech);
		         		strcpy(dic[j].speech,speechh);
		         		strcpy(descriptionn,dic[i].description);
		         		strcpy(dic[i].description,dic[j].description);
		         		strcpy(dic[j].description,descriptionn);
						b=1;
				    	}		
					 }
				 }
				 if(b==0)
			     	 puts("Sort not success");
				 else
				    puts("Sort success");
			}break;
			case'h':
			case 'H': {
				int add,b=0;
				printf("Add more Word= "); scanf("%d",&add);
				for(i=n;i<n+add;i++){
					printf("...............Words %d..............\n",i+1);
					Input();
					b=1;
				}
				if(b==0)
				puts("Add not success");
				else{
					n+=add;
					puts("Add success");
				}
			}break;
			case'i':
			case 'I': {
		    	system("cls");	
			}break;
			case'j':
			case 'J': {
		        exit(0);	
			}break;
		}
printf("Do you want to continue? (yes/no): \n");
scanf("%s",&status);
}while(stricmp(status,"yes")==0);
}
