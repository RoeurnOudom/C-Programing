#include<stdio.h>
#include<string.h>
struct Books{
	char title[50];
	char author[50];
	char subject[50];
	int book_id;
};
// function declaration
void Output(struct Books book);
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
	Output(Book1);
	//print Book2 info
	Output(Book2);
	return 0;
}
void Output(struct Books book){
	printf("Book  title : %s\n",book.title);
	printf("Book  author : %s\n",book.author);
	printf("Book  subject : %s\n",book.subject);
	printf("Book  book_id : %d\n",book.book_id);
}
