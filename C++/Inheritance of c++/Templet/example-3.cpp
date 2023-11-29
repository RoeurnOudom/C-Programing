//Class template
#include<iostream>
using namespace std;
template <class T>
class mypair{
	T a,b;
	public:
		mypair(T first ,T second){
			a=first;
			b=second;
		}
		T getmax();
};
template <class T>
T mypair<T>::getmax(){
	T retval;
	if(a>b)
	retval=a;
	else
	retval=b;
	return retval;
}
int main(){
	mypair<int> myobject1 (100,75);
	cout<<"Integer Value= "<<myobject1.getmax()<<endl;
	mypair<float> myobject2 (100.56,75.80);
	cout<<"Floating Value= "<<myobject2.getmax()<<endl;
	mypair<double> myobject3 (156.56,275.80);
	cout<<"Double Value= "<<myobject3.getmax()<<endl;
	return 0;
}
