#include<iostream>
using namespace std;
class Test{
	private:
		int x,y,z;
		public:
			//overloading constructor
			Test(){
				x=0;
				y=0;
			}
			Test(int x){ //overloading
				this->x=x;
				this->y=0;
			}
			Test(int x,int y){
				this->x=x;
				this->y=y;
			}
			void Output(){
				cout<<"X= "<<x<<endl;
				cout<<"Y= "<<y<<endl;
			}
};
int main(){
	Test t;
	//calling overloading constructor
	Test t1;
	Test t2(15);
	Test t3(100,5);
	cout<<"Constructor 1: "<<endl;
	t1.Output();
	cout<<"Constructor 2: "<<endl;
	t2.Output();
	cout<<"Constructor 3: "<<endl;
	t3.Output();
	return 0;
}
