#include<iostream>
#include<string.h>
using namespace std;
class A{
	protected:
		int x,y;
		public:
			A(){
				x=0;
				y=0;
			}
			A(int x,int y){
		        this->x=x;
		        this->y=y;
			}
			void Input(){
				cout<<"Input X= "; cin>>x;
				cout<<"Input Y= "; cin>>y;
			}
			void Output(){
				cout<<"X+Y= "<<x+y<<endl;
			}
};
class B:public A{
	protected:
		int m;
		public:
			B(){
			m=0;
		}
		B(int x,int y,int m){
			this->x=x;
		    this->y=y;
			this->m=m;
		}
		void Input(){
			    A::Input();
				cout<<"Input M= "; cin>>m;
			}
		void Output(){
			    A::Output();
			    cout<<"X-M= "<<x-m<<endl;
			}
};
class C:public B{
	private:
		int n;
		public:
			C(){
				B:B();
	            n=0;
			}
			C(int x,int y,int m,int n){
			  	this->x=x;
			    this->y=y;
				this->m=m;
				this->n=n;
			}
			void Input(){
				B::Input();
				cout<<"Input N= "; cin>>n;
			}
			void Output(){
				B::Output();
				cout<<"M*N= "<<m*n<<endl;
				cout<<"Y/N= "<<y/n<<endl;
				cout<<"m%x= "<<m%x<<endl;
			}
};
int main(){
	C obj;
	obj.Input();
	obj.Output();
}
