#include<stdio.h>
#include<string.h>
struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
int main(){
	char op;
	int i,j,n;
	int b=0;
	do{
		struct Books book[20];
		printf("\n..........Menu Choice...........\n");
		printf("a- Input\n");
		printf("b- Output\n");
		printf("c- Search\n");
		printf("d- Update\n");
		printf("e- Sort\n");
		printf("Please Choose One= ");
		scanf("%c",&op);
		switch(op){
			case 'a': 
			case 'A': {
		            printf("Input Number of Students= "); scanf("%d",&n);
		            for(i=0;i<n;i++){
		            	printf("...............Book Record %d..............\n",i+1);
		            	printf("Input Code= ");
		            	scanf("%d",&book[i].book_id); fflush(stdin);
		            	printf("Input Title= "); 
		            	gets(book[i].title); fflush(stdin);
		            	printf("Input Author= ");
		            	gets(book[i].author); fflush(stdin);
		            	printf("Input Subject= "); 
		            	gets(book[i].subject); 
					}
			}break;
			case 'b':
			case 'B': {
				    printf("%-15s%-15s%-15s%-15s\n","Book_ID","Title","Author","Subject");
				    for(i=0;i<n;i++){
				    	printf("%-15d%-15s%-15s%-15s\n",book[i].book_id,book[i].title,book[i].author,book[i].subject);
					}
			}break;
			case 'c':
			case 'C': {
				    b=0;
				    int svalue;
				    printf("Input ID to Search= ");
				    scanf("%d",&svalue);
				    printf("%-15s%-15s%-15s%-15s\n","Book_ID","Title","Author","Subject");
				    for(i=0;i<n;i++){
				    	if(book[i].book_id==svalue){
				    		printf("%-15d%-15s%-15s%-15s\n",book[i].book_id,book[i].title,book[i].author,book[i].subject);
				    		printf("Search Found\n");
				    		b=1;
				    		break;
						}
					}
					if(b=0)
					printf("Search not found\n");
			}break;
			case 'd': 
			case 'D': {
				    char bookk[20];
				    char titlee[20];
				    char authorr[20];
				    char subjecc[20];
				    int uvalue;
				    b=0;
				    printf("Input ID to Update= ");
					scanf("%d",&uvalue);
					for(i=0;i<n;i++){
						if(book[i].book_id==uvalue){
							printf("Input New BookID= ");
							fflush(stdin); gets(bookk);
							printf("Input New Title= ");
							fflush(stdin); gets(titlee); 
							printf("Input New Author= ");
							fflush(stdin); gets(authorr); 
							printf("Input New Subject= ");
							fflush(stdin); gets(subjecc); 
							book[i].book_id=bookk;
							strcpy(book[i].title,titlee);
							strcpy(book[i].author,authorr);
							strcpy(book[i].subject,subjecc);
							b=1;
							break;	
						}
					}
					if(b==0)
					printf("Search not found\n");
			}break;
		}
	printf("Press Enter to continue.....!\n");
	}while(getch()==13);
}
