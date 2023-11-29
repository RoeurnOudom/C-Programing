#include<iostream>
using namespace std;
int sum1(){
	int i,n,sum=0;
	cout<<"Input N= "; cin>>n;
	for(i=1;i<=n;i++){
		cout<<i<<"+";
		sum=sum+i;
	}
	cout<<"\b="<<sum<<endl;
	return sum;
}
int sum2(){
	int i,n,sum=0;
	cout<<"Input N= "; cin>>n;
	for(i=2;i<=n;i=i+2){
		cout<<i<<"+";
		sum=sum+i;
	}
	cout<<"\b="<<sum<<endl;
	return sum;
}
int sum3(){
	int i,n,sum=0;
	cout<<"Input N= "; cin>>n;
	for(i=3;i<=n;i=i+2){
		cout<<i<<"+";
		sum=sum+i;
	}
	cout<<"\b="<<sum<<endl;
	return sum;
}
int sum4(){
	int i,n,sum=0,f=1;
	cout<<"Input N= "; cin>>n;
	for(i=1;i<=n;i++){
		cout<<i<<"!+";
		f=f*i;
	}
	cout<<"\b="<<f;
	return sum;
}
int main(){
     sum1();
     sum2();
     sum3();
     sum4();
}
