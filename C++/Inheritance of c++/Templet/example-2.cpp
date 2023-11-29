#include<iostream>
using namespace std;
//Template Function
template <typename T>
void swap(T *x, T *y){
	T temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int x1=12,y1=34;
	long x2=123,y2=56;
	float x3=58.9,y3=45.9;
	double x4=789.3,y4=562.9;
	string st1="ETEC",st2="Center";
	//Using/calling Template function sum
	swap(&x1,&y1);
	cout<<"Integer x1= "<<x1<<"y1= "<<y1<<endl;
	swap(&x2,&y2);
	cout<<"Long x2= "<<x2<<"y2= "<<y2<<endl;
	swap(&x3,&y3);
	cout<<"Floating x3= "<<x3<<"y3= "<<y3<<endl;
	swap(&x4,&y4);
	cout<<"Double x4= "<<x4<<"y4= "<<y4<<endl;
	swap(&st1,&st2);
	cout<<"String s1= "<<st1<<"s2= "<<st2<<endl;
}
