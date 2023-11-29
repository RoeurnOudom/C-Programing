#include<iostream>
using namespace std;
//Abstract Class
class Test1{
	public:
		//Abstract Method
		virtual int sum()=0;
		virtual void input()=0;
		virtual void output()=0;
};
class Test2:public Test1{
	private:
		int x;
		int y;
		int z;
		public:
			Test2(){
			}
			//overiding method input
			void input(){
				cout<<"Input x= "; cin>>x;
				cout<<"Input y= "; cin>>y;
				cout<<"Input z= "; cin>>z;
			}
			//overiding method output
			void output(){
				cout<<"x= "<<x<<endl;
				cout<<"y= "<<y<<endl;
				cout<<"z= "<<z<<endl;
			}
			//overiding method sum
			int sum(){
				return x+y+z;
			}
};
int main(){
	Test2 obj;
	obj.input();
	obj.output();
	cout<<"Sum= "<<obj.sum();
}
