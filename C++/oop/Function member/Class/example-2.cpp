#include<iostream>
using namespace std;
class Test{
	private: 
	   int x;
	   int y;
	   int z;
    public:
     void Input(){   //function block
     	cout<<"Input x= "; cin>>x;
     	cout<<"Input y= "; cin>>y;
     	cout<<"Input z= "; cin>>z;
	 }
	 int findSum(){  //return function
	 	return x+y+z;
	 }
	 void Output(){
	 	cout<<"X="<<x<<endl;
	 	cout<<"Y="<<y<<endl;
	 	cout<<"Z="<<z<<endl;
	 	cout<<"Sum="<<findSum()<<endl; //calling fucntion
	 }
};
int main(){
	Test obj; //Create Object
	obj.Input(); //calling function 
	obj.Output(); //calling function
	
}
