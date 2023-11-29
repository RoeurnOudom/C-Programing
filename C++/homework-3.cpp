#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int code,qty;
	string name;
	double price,total,payment,dis;
	cout<<"______________________Input Product___________________\n";
	cout<<"Input Code= "; cin>>code;
	cout<<"Input Name= "; cin.ignore(); getline(cin,name);
	cout<<"Input Qty= "; cin>>qty;
	cout<<"Input Price= "; cin>>price;
	total=qty*price;
	if(total>=1 && total<=10){
		payment=total-(total*0.1);
	}else if(total>10 && total<=20){
		payment=total-(total*0.2);
	}else if(total>20 && total<=30){
		payment=total-(total*0.3);
	}else if(total>30 && total<=40){
		payment=total-(total*0.4);
	}else if(total>40 && total<=50){
		payment=total-(total*0.5);
	}else if(total>50 && total<=60){
		payment=total-(total*0.6);
	}else{
		payment=total-(total*0.7);
	}
	cout<<"______________________Output Product___________________\n";
	cout<<left<<setw(10)<<"Code"<<setw(10)<<"Name"<<setw(10)<<"Qty"<<setw(10)<<"Price"<<setw(10)<<"Total"<<setw(10)<<"Payment"<<endl;
	cout<<left<<setw(10)<<code<<setw(10)<<name<<setw(10)<<qty<<setw(10)<<price<<setw(10)<<total<<setw(10)<<payment<<endl;
	
}
