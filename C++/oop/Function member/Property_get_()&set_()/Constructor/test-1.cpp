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
		Employee(){
			code=0;
			name="null";
			sex='0';
			salary=0.0;
		}
		Employee(int c,string n,char s,float sa){
			code=c;
			name=n;
			sex=s;
			salary=sa;
		}
		void input(){
			cout<<"Input Code= "; cin>>code;
			cout<<"Input Name= "; cin>>name;
			cout<<"Input Sex= "; cin>>sex;
			cout<<"Input Salary= "; cin>>salary;
		}
		void output(){
			cout<<left<<setw(10)<<"Code"<<setw(10)<<"Name"<<setw(10)<<"Sex"<<setw(10)<<"Salary"<<endl;
            cout<<left<<setw(10)<<code<<setw(10)<<name<<setw(10)<<sex<<setw(10)<<salary<<endl;
		}
};
int main(){
	Employee stu;
	stu.output();
	stu.input();
	stu.output();
	Employee stu1(1001,"Dara",'m',700);
	stu1.output();
}
