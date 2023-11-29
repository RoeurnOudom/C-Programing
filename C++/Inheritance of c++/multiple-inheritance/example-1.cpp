#include<iostream>
#include<string.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class A{
	protected:
		int code;
		string name;
		public:
			void Input(){
				cout<<"Input Code= "; cin>>code;
				cout<<"Input Name= "; cin>>name;
			}
			void Output(){
			    cout<<left<<setw(10)<<code<<setw(10)<<name;
			}
};
class B{
	protected:
		int qty;
		float price,dis;
		public:
			void Input(){
				cout<<"Input Qty= "; cin>>qty;
				cout<<"Input Price= "; cin>>price;
				cout<<"Input Discount= "; cin>>dis;
			}
			void Output(){
				cout<<setw(10)<<qty<<setw(10)<<price<<"%"<<setw(10)<<dis<<"$";
			}
};
class C:private A,private B{
	private:
		float total,payment;
		public:
			void Input(){
				A::Input();
				B::Input();
				total=qty*price;
				payment=total-(total*dis/100);
			}
			void Output(){
				A::Output();
				B::Output();
				cout<<setw(10)<<total<<"$"<<setw(10)<<payment<<endl;
			}
			int getcode(){
				return code;
			}
};
void Header(){
    cout<<left<<setw(10)<<"Code"<<setw(10)<<"Name"<<setw(10)<<"Qty"<<setw(10)<<"Price"<<
	setw(10)<<"Discount"<<setw(10)<<"Total"<<setw(10)<<"Payment"<<endl;
	}
int main(){
    string status;
    int op;
    C obj[20];
    int i,j,n;
    start:
    	cout<<"1. Input"<<endl;
    	cout<<"2. Output"<<endl;
    	cout<<"3. Search"<<endl;
    	cout<<"4. Update"<<endl;
    	cout<<"5. Delete"<<endl;
    	cout<<"6. Insert"<<endl;
    	cout<<"7. Sort"<<endl;
    	cout<<"8. Add"<<endl;
    	cout<<"9. Clear"<<endl;
    	cout<<"Please Choose One Option(1-9)= "; cin>>op;
    	switch(op){
    		case 1:{
    			   cout<<"_____________________________________________"<<endl;
    			   cout<<"Input number= "; cin>>n;
    			   for(i=0;i<n;i++){
    			   	    cout<<"____________________Product#"<<i+1<<"____________________"<<endl;
    			   	      obj[i].Input();
				   }
			}break;
			case 2:{
    			   cout<<"_____________________________________________"<<endl;
    			   Header();
    			   for(i=0;i<n;i++){
    			   	      obj[i].Output();
				   }
			}break;
			case 3:{
    			   cout<<"_____________________________________________"<<endl;
    			   int scode;
    			   bool check=false;
    			   cout<<"Input Code for Search= "; cin>>scode;
    			   Header();
    			   for(i=0;i<n;i++){
    			   	if(scode==obj[i].getcode()){
    			   		obj[i].Output();
    			   		check=true;
					   }
				   }
				   if(check==false)
					cout<<"Search not Found"<<endl;
					else
				    cout<<"Search success"<<endl;
			}break;
			case 4:{
				cout<<"_____________________________________________"<<endl;
			     int upcode;
			     bool check=false;
				cout<<"Input Code for Update= "; cin>>upcode;
				for(i=0;i<n;i++){
					if(upcode==obj[i].getcode()){
					    obj[i].Input();
						check=true;
					}
				}
				if(check==false)
				cout<<"Update not Success"<<endl;
				else
			    cout<<"Update success"<<endl;
			}break;
			case 5:{
				cout<<"_____________________________________________"<<endl;
			     int dcode;
			     bool check=false;
				cout<<"Input Code for Delete= "; cin>>dcode;
				for(i=0;i<n;i++){
					if(dcode==obj[i].getcode()){
					    for(j=i;j<n;j++){
					    	obj[j]=obj[j+1];
						}
						n--;
				        check=true;
					}
				}
				if(check==false)
				cout<<"Delete not Success"<<endl;
				else
			    cout<<"Delete success"<<endl;
			}break;
			case 6:{
				cout<<"_____________________________________________"<<endl;
			     int incode;
			     bool check=false;
				cout<<"Input Code for Insert= "; cin>>incode;
				for(i=0;i<n;i++){
					if(incode==obj[i].getcode()){
					    for(j=n;j>i;j--){
					    	obj[j]=obj[j-1];
						}
						n++;
						obj[i].Input();
				        check=true;
				        break;
					}
				}
				if(check==false)
				cout<<"Insert not Success"<<endl;
				else
			    cout<<"Insert Success"<<endl;
			}break;
			case 7:{
				cout<<"_____________________________________________"<<endl;
			     int incode;
			     bool check=false;
				 C obj1;
				 for(i=0;i<n;i++){
				 	for(j=i+1;j<n;j++){
				 		if(obj[i].getcode()<obj[j].getcode()){
				 			obj1=obj[i];
				 			obj[i]=obj[j];
				 			obj[j]=obj1;
				 			check=true;
						 }
					 }
				 }
				if(check==false)
				cout<<"Sort not Success"<<endl;
				else
			    cout<<"Sort Success"<<endl;
			}break;
			case 8:{
				cout<<"_____________________________________________"<<endl;
			     bool check=false;
				 cout<<"Input number= "; cin>>n;
				 for(i=n;i<n+n;i++){
				 	cout<<"____________________Product#"<<i+1<<"____________________"<<endl;
				 	obj[i].Input();
				 	check=true;
				 }
				  n=n+n;
				if(check==false)
				cout<<"Add not Success"<<endl;
				else
			    cout<<"Add Success"<<endl;
			}break;
			case 9:{
			     system("cls");	
			}break;
		}
	cout<<"Do u want to continue(yes/no)= "; cin>>status;
	if(status=="yes"){
		goto start;
	}
}
