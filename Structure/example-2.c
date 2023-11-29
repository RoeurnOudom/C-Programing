#include<stdio.h>
#include<string.h>
struct Books{
	char title[50];
	char author[50];
	char subject[50];
	int book_id;
};
int main(){
	struct Books Book1;  // Declare Book1 of type Book
	struct Books Book2;  // Declare Book2 of type Book
	//book 1 specification
	strcpy(Book1.title, "C Programing");
	strcpy(Book1.author, "Heng Pheakna");
	strcpy(Book1.subject, "Basic C Programing");
	Book1.book_id= 1001;
	//book 2 specification
	strcpy(Book2.title, "C++ Programing");
	strcpy(Book2.author, "Thai Symeng");
	strcpy(Book2.subject, "Basic C++ Programing");
	Book2.book_id=1002;
	//print  Book1 info
	printf("Book 1 title : %s\n",Book1.title);
	printf("Book 1 author : %s\n",Book1.author);
	printf("Book 1 subject : %s\n",Book1.subject);
	printf("Book 1 book_id : %d\n",Book1.book_id);
	//print Book2 info
	printf("Book 2 title : %s\n",Book2.title);
	printf("Book 2 author : %s\n",Book2.author);
	printf("Book 2 subject : %s\n",Book2.subject);
	printf("Book 2 book_id : %d\n",Book2.book_id);
	return 0;
}
