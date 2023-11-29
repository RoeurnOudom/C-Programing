#include<iostream>
using namespace std;
class Test{
	private:
		int x;
	    public:
	    	Test(){
	    		x=5;
			}
			void operator ++(){
				x=x+1;
			}
			void operator --(){
				x=x-1;
			}
			void operator *(){
				x=x*1;
			}
			void operator /(int a){ //one agument
				x=a/2;
			}
			void Display(){
				cout<<"X= "<<x<<endl;
			}
};
int main(){
	Test t;
	++t;
	t.Display();
	--t;
	t.Display();
	*t;
	t.Display();
	t.operator/(10);
	t.Display();
	return 0;
}
