#include<iostream>
using namespace std;
class Test{
	private: 
	   int x;
	   int y;
	   int z;
    public:
     void Input(){    //function block
     	cout<<"Input x= "; cin>>x;
     	cout<<"Input y= "; cin>>y;
     	cout<<"Input z= "; cin>>z;
	 }
	 int sum(){   //return function 
	 	return x+y+z;
	 }
};
int main(){
	Test obj; //Create Object
	obj.Input(); //calling function 
	cout<<"\nSum="<<obj.sum();
}
