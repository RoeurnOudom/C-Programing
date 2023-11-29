#include<iostream>
using namespace std;
class Test1{
	protected:
		int x;
		int y;
		public:
			Test1(){
				x=0;
				y=0;
			}
			Test1(int a,int b){
		        x=a;
		        y=b;
			}
			void Input(){
				cout<<"Input x= "; cin>>x;
				cout<<"Input y= "; cin>>y;
			}
			void Ouput(){
				cout<<"x= "<<x<<endl;
				cout<<"y= "<<y<<endl;
			}
};
class Test2: public Test1{ //inheritan 
	private:
		int z;
		public:
			Test2(){
				Test1:Test1();
				z=0;
			}
			Test2(int a,int b,int c){
				x=a;
				y=b;
				z=c;
			}
			void Input(){
				Test1::Input();
				cout<<"Input z= "; cin>>z;
			}
			void Ouput(){
				Test1::Ouput();
				cout<<"z= "<<z<<endl;
			}
};
int main(){
	Test2 obj2;
	obj2.Input();
	obj2.Ouput();     
}
