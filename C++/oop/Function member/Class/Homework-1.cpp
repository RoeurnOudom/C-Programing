#include<iostream>
#include<iomanip>
using namespace std;
class Employee{
	private:
		int code;
		string name;
		char sex;
		float salary;
	public:
	     void Input(){
	     	cout<<"_____________________Input Employee___________________\n";
	     	cout<<"Input Code= "; cin>>code;
		    cout<<"Input Name= "; cin.ignore(); getline(cin,name);
		    cout<<"Input Sex= "; cin>>sex;
		    cout<<"Input Salary= "; cin>>salary;
		 }
		 void Output(){
		 	    cout<<"_____________________Ouput Employee___________________\n";
		 	    cout<<left<<setw(10)<<"Code"<<setw(10)<<"Name"<<setw(10)<<"Sex"<<setw(10)<<"Salary"<<endl;
                cout<<left<<setw(10)<<code<<setw(10)<<name<<setw(10)<<sex<<setw(10)<<salary<<endl;
        }
};
int main(){
	Employee obj; //Create Object
	obj.Input(); //calling function 
	obj.Output(); //calling function	
}

