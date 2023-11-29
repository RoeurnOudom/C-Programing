#include<iostream>
using namespace std;
class Test1{
	protected:
		int x;
		int y;
};
class Test2:public Test1{
	private:
	   int z;
	public:
	   void Input(){
	   	cout<<"Input x= "; cin>>x;
	   	cout<<"Input y= "; cin>>y;
	   	cout<<"Input z= "; cin>>z;
	   }
	   void Output(){
	   	cout<<"x= "<<x<<endl;
	   	cout<<"y= "<<y<<endl;
	   	cout<<"z= "<<z<<endl;
	   }
};
  int main(){
  	Test2 obj2;
  	obj2.Input();
  	obj2.Output();
  }
