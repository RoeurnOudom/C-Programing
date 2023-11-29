#include<iostream>
using namespace std;
class Students{
	private:
		int code;
		string name;
		string sex;
		float salary;
	public:
		void setCode(int c){
			this->code=code;
			code=c;
		}
		void setName(string n){
			this->name=n;
		}
		void setSalary(float s){
			this->salary=s;
		}
		int getCode(){
			return code;
		}
		string getName(){
			return name;
		}
		float getsalary(){
			return salary;
		}
};
int main(){
	Students stu;
	stu.setCode(1001);
	stu.setName("Sok Vanna");
	stu.setSalary(800);
	cout<<"Code= "<<stu.getCode()<<endl;
	cout<<"Name= "<<stu.getName()<<endl;
	cout<<"Salary= "<<stu.getsalary()<<endl;
}
