#include<iostream>
using namespace std;
//Templet Function
template <typename T>
T sum(T x,T y,T z){
	return x+y+z;
}
int main(){
	int x1=12,y1=34,z1=24;
	long x2=123,y2=56,z2=12;
	float x3=58.9,y3=45.9,z3=40;
	//using/calling templet function sum
	cout<<"Sum integer= "<<sum(x1,y1,z1)<<endl;
	cout<<"Sum Long= "<<sum(x2,y2,z2)<<endl;
	cout<<"Sum Float= "<<sum(x3,y3,z3)<<endl;
}
