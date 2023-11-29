#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int id;
	string name;
	string sex;
	float salary;
	string add;
	cout<<"______________________Input Information___________________\n";
	cout<<"Input ID= "; cin>>id;
    cout<<"Input Name= "; cin.ignore(); getline(cin,name);
    cout<<"Input Sex= "; cin>>sex;
    cout<<"Input Salary= "; cin>>salary;
    cout<<"Input Address= "; cin.ignore(); getline(cin,add);
    cout<<"_____________________Ouput Information___________________\n";
    cout<<left<<setw(10)<<"ID"<<setw(10)<<"Name"<<setw(10)<<"Sex"<<setw(10)<<"Salary"<<setw(10)<<"Address"<<endl;
    cout<<left<<setw(10)<<id<<setw(10)<<name<<setw(10)<<sex<<setw(10)<<salary<<setw(10)<<add<<endl;
}
