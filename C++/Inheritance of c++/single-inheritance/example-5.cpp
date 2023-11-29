#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class A{
	protected:
		int id;
		string name;
		public:
			A(){
				id=0;
				name="None";
			}
			A(int id,string name){
				this->id=id;
				this->name=name;
			}
			void Input(){
				cout<<"Input ID= "; cin>>id;
				cout<<"Input Name= "; cin>>name;
			}
			void Output(){
				cout<<left<<setw(10)<<id<<setw(10)<<name;
			}
			void Header(){
				cout<<left<<setw(10)<<"ID"<<setw(10)<<"Name";
			}
};
class B:public A{
	protected:
		string position;
		float salary;
		public:
			B(){
			position="None";
			salary=0;
		}
		    B(int id,string name,string position,float salary){
		    	this->id=id;
				this->name=name;
		    	this->position=position;
		    	this->salary=salary;
			}
			void Input(){
				A::Input();
				cout<<"Input Position= "; cin>>position;
				cout<<"Input Salary= "; cin>>salary;
			}
			void Output(){
				A::Output();
				cout<<setw(10)<<position<<setw(10)<<salary;
			}
			void Header(){
				A::Header();
				cout<<setw(10)<<"Position"<<setw(10)<<"Salary";
			}
		
};
class C:public B{
	protected:
		string major;
		string university;
		public:
			C(){
				major="None";
				university="None";
			}
			C(int id,string name,string position,float salary,string major,string university){
				this->id=id;
				this->name=name;
		    	this->position=position;
		    	this->salary=salary;
				this->major=major;
				this->university=university;
			}
			void Input(){
				B::Input();
				cout<<"Input Major= "; cin>>major;
				cout<<"Input University= "; cin>>university;
			}
			void Output(){
				B::Output();
				cout<<setw(10)<<major<<setw(10)<<university;
			}
			void Header(){
				B::Header();
				cout<<setw(10)<<"Major"<<setw(10)<<"University";
			}
};
class D:public C{
	private:
		string subject;
		float score;
		public:
			D(){
				subject="None";
				score=0;
			}
			D(int id,string name,string position,float salary,string major,string university,string subject,float score){
				this->id=id;
				this->name=name;
		    	this->position=position;
		    	this->salary=salary;
				this->major=major;
				this->university=university;
			    this->subject=subject;
			    this->score=score;
			}
			void Input(){
				C::Input();
				cout<<"Input Subject= "; cin>>subject;
				cout<<"Input Score= "; cin>>score;
			}
			void Output(){
				C::Output();
				cout<<setw(10)<<subject<<setw(10)<<score;
			}
			void Header(){
				C::Header();
				cout<<setw(10)<<"Subject"<<setw(10)<<"Score";
			}
};
int main(){
	cout<<"_________________________________________________________"<<endl;
	B obj;
	B objj;
	B obj1(0,"None","None",0);
	obj.Input();
	obj.Header();
	cout<<endl;
	obj.Output();
	cout<<endl;
	objj.Output();
	cout<<endl;
	obj1.Output();
	cout<<"\n_________________________________________________________\n";
    C objk;
    C objkk;
    C obj2(0,"None","None",0,"None","None");
    cout<<endl;
    objk.Input();
    cout<<endl;
    objk.Header();
    cout<<endl;
    objk.Output();
    cout<<endl;
    objkk.Output();
    cout<<endl;
    obj2.Output();
    cout<<endl;
    cout<<"_________________________________________________________"<<endl;
    D objl;
    D objll;
    D obj3(0,"None","None",0,"None","None","None",0);
    cout<<endl;
    objl.Input();
    cout<<endl;
    objl.Header();
    cout<<endl;
    objl.Output();
    cout<<endl;
    objll.Output();
    cout<<endl;
    obj3.Output();
    cout<<endl;	
}
