#include<iostream>
#include<fstream>
using namespace std;
class Employee{
	public:
		//Instane varibles
		char name[20];
		char sex;
		int age;
};
int main(){
	Employee obj;
	ifstream file_obj;
	file_obj.open("Employee.txt", ios::in);
	file_obj.read((char *)&obj, sizeof(obj));
	cout<<"    ==============================\n";
	cout<<"       Your Data Information\n";
	cout<<"    ==============================\n";
	while (!file_obj.eof()){
		cout<<"       "<<obj.name<<"  "<<obj.sex<<"   "<<obj.age<<endl;
		cout<<"     -------------------------------------\n";
		file_obj.read((char *)&obj, sizeof(obj));
	}
	cout<<"Good luck...!\n";
	return 0;
}
