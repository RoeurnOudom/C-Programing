#include<iostream>
#include<conio.h>
using namespace std;
class CalculateArea{
	public:
		void Area(int r){ //overloading function 1
			cout<<"\n\tArea of Circle is: "<<3.14*r*r;
		}
		void Area(int l, int b){   //overloading function 2
			cout<<"\n\tArea of Rectangle is: "<<l*b;
		}
		void Area(float l, int b){   //overloading function 3
			cout<<"\n\tArea of Rectangle is: "<<l*b;
		}
		void Area(int l, float b){  //overloading function 4
			cout<<"\n\tArea of Rectangle is: "<<l*b;
		}
};
int main(){
	CalculateArea C;
	C.Area(5);   //statement 1
	C.Area(5,3);  //statement 2
	C.Area(7,2.1f); // statement 3
	C.Area(4.7f,2); // statement 4
}
