//c++ programing to write and read text in/from file.
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main(){
	fstream file; //object of fstream class
	//opening file 
	char line[20];
	file.open("students.txt", ios::in);
	if(!file){
		cout<<"Error in creating file!!!"<<endl;
		return 0;
	}
	cout<<"Reading from a text file: "<<endl;
	while (!file.eof()){
		file.getline(line, 100);
		cout<< line <<endl;
	}
	file.close();
	return 0;
}
