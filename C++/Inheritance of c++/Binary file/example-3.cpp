//c++ program to write and read text in.from file
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main(){
	fstream file; //object of fstream class
	//opening file "sample.txt" in out(write) mode
	int code;
	char name[20];
	char sex;
	float score;
	do{
		system("cls");
		file.open("students.txt", ios::app);
		if(!file){
			cout<<"Error in creating file!!"<<endl;
			return 0;
		}
		cout<<">>>>Start Input Data>>>>"<<endl;
		cout<<"Input Code= "; cin>>code;
		cin.ignore();
		cout<<"Input Name= "; cin.getline(name,20);
		cout<<"Input Sex= "; cin>>sex;
		cout<<"Input Score= "; cin>>score;
		//write text into file
		file<<code<<"  "<<name<<"  "<<sex<<"  "<<score<<endl;
		//closing the file
		cout<<"Write Complete!"<<endl;
		file.close();
		cout<<"Press Enter to continue...!";
	}while(getch()==13);
	return 0;
}
