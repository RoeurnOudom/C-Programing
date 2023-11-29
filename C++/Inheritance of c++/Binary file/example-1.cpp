#include<iostream>
#include<fstream>
using namespace std;
class Employee{
	public:
		//Instan variables
		char name[20];
		char sex;
		int age;
};
int main(){
	int n,i;
	ofstream file_obj;
	file_obj.open("Employee.txt", ios::app);
	Employee obj;
	cout<<"Input Number of Employee= "; cin>>n;
	for(i=0;i<n;i++){
		cout<<"Input Name= "; cin>>obj.name;
		cout<<"Input Sex= "; cin>>obj.sex;
		cout<<"Input Age= "; cin>>obj.age;
		file_obj.write((char*)&obj, sizeof(obj));
	}
	file_obj.close();
	return 0;
}
