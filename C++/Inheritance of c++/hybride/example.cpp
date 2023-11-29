#include<iostream>
#include<string.h>
using namespace std;
class A{
	protected:
		int x,y;
		public:
			void Input(){
				cout<<"Input X= "; cin>>x;
				cout<<"Input Y= "; cin>>y;
			}
			void Output(){
				cout<<"X+Y= "<<x+y<<endl;
			}
};
class B{
	protected:
		int m,n;
		public:
		void Input(){
			   
				cout<<"Input M= "; cin>>m;
				cout<<"Input N= "; cin>>n;
			}
		void Output(){
			    cout<<"M-N= "<<m-n<<endl;
			    cout<<"M*N= "<<m*n<<endl;
			}
};
class C:public A,public B{
	protected:
		int i,k;
		public:
		void Input(){
			    A::Input();
			    B::Input();
				cout<<"Input I= "; cin>>i;
				cout<<"Input K= "; cin>>k;
			}
		void Output(){
			    A::Output();
			    B::Output();
			    cout<<"X-I= "<<x-i<<endl;
			    cout<<"Y-K= "<<y-k<<endl;
			}
};
class D:private C{
	private:
		int z;
		public:
			void Input(){
				C::Input();
				cout<<"Z= "; cin>>z;
			}
			void Output(){
				C::Output();
				cout<<"Z/M= "<<z/m<<endl;
				cout<<"Z%I= "<<z%i<<endl;
			}
};
int main(){
	D obj;
	obj.Input();
	obj.Output();
}
