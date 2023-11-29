#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
#include<stdbool.h>
using namespace std;
class Employee{
	private:
		int code;
		string name;
		char sex;
		float salary;
	public:
		Employee(){
			code=0;
			name="null";
			sex='0';
			salary=0.0;
		}
		Employee(int c,string n,char s,float sa){
			code=c;
			name=n;
			sex=s;
			salary=sa;
		}
		int getCode(){
			return code;
		}
		string getName(){
			return name;
		}
		void input(){
			cout<<"Input Code= "; cin>>code;
			cout<<"Input Name= "; cin>>name;
			cout<<"Input Sex= "; cin>>sex;
			cout<<"Input Salary= "; cin>>salary;
		}
		void output(){
            cout<<left<<setw(10)<<code<<setw(10)<<name<<setw(10)<<sex<<setw(10)<<salary<<endl;
		}
};
        void header(){
			cout<<left<<setw(10)<<"Code"<<setw(10)<<"Name"<<setw(10)<<"Sex"<<setw(10)<<"Salary"<<endl;
		}
int main(){
	Employee em[50];
	int i,j,n,op;
	do{
		cout<<endl<<"___________________________[M E N U]_________________________"<<endl;
		cout<<"1.Input"<<endl;
		cout<<"2.Output"<<endl;
		cout<<"3.Search"<<endl;
		cout<<"4.Update"<<endl;
		cout<<"5.Delete"<<endl;
		cout<<"6.Insert"<<endl;
		cout<<"7.Sort"<<endl;
		cout<<"8.Add"<<endl;
		cout<<"9.Clear"<<endl;
		cout<<"Please choose one option(1-9)= "; cin>>op;
		switch(op){
			case 1: {
				    cout<<endl<<"___________________[Input Employee]__________________"<<endl;
		        	cout<<"Input Number of employee= "; cin>>n;
		        	for(i=0;i<n;i++){
		        		cout<<"\n__________________Employee #"<<i+1<<"______________"<<endl;
		        		em[i].input();
					}
			}break;
			case 2:	{
				cout<<endl<<"_____________________[Output Employee]__________________"<<endl;
				header();
				for(i=0;i<n;i++){
					em[i].output();
				}	
			}break;
			case 3:{
				cout<<endl<<"_____________________[Search Employee]__________________"<<endl;
				int scode;
				bool b=false;
				cout<<"Input employee Code for Search= "; cin>>scode;
				for(i=0;i<n;i++){
				if(scode==em[i].getCode()){
					header();
					em[i].output();
					b=true;
					cout<<"\nSearch Successful..."<<endl;
				}
			}	
			if(b==false)
				cout<<"\n Search Code not Found...!"<<endl;
			}break;
			case 4:	{
				    cout<<endl<<"____________________[Update Employee]________________"<<endl;
					int ucode;
					bool b=false;
					cout<<"Input employee Code for Update= "; cin>>ucode;
					for(i=0;i<n;i++){
					if(ucode==em[i].getCode()){
						em[i].input();
						b=true;
						cout<<"\nUpdate Successful..."<<endl;
					}
				}	
				if(b==false)
					cout<<"\n Update not Successful..!"<<endl;
			}break;
			case 5: {
				cout<<endl<<"________________________[Delete Employee]_________________________"<<endl;
				int dcode;
				bool b=false;
					cout<<"Input employee Code for Delete= "; cin>>dcode;
					for(i=0;i<n;i++){
					if(dcode==em[i].getCode()){
						for(j=i;j<n-1;j++){
							em[j]=em[j+1];
						}
						n--;
						b=true;
					    cout<<"\nDelete Successful..."<<endl;
					}
				}	
				if(b==false)
					cout<<"\n Delete not Successful...!"<<endl;
			}break;
			case 6: {
				cout<<endl<<"________________________[Insert Employee]_________________________"<<endl;
				int incode;
				bool b=false;
					cout<<"Input employee Code for Insert= "; cin>>incode;
					for(i=0;i<n;i++){
					if(incode==em[i].getCode()){
						for(j=n;j>i;j--){
							em[j]=em[j-1];
						}
						n++;
						em[i].input();
						b=true;
					    cout<<"\nInsert Successful..."<<endl;
					    break;
					}
				}	
				if(b==false)
					cout<<"\n Insert not Successful...!"<<endl;
			}break;
			case 7: {
				cout<<endl<<"________________________[Sort Employee]_________________________"<<endl;
				int stcode;
				Employee tmp;
				bool b=false;
					for(i=0;i<n;i++){
						for(j=i+1;j<n;j++){
							if(em[i].getCode()<em[j].getCode()){
								tmp=em[i];
								em[i]=em[j];
								em[j]=tmp;
								b=true;
							    cout<<"\nSort Successful..."<<endl;
							}
						}
					}
				if(b==false)
					cout<<"\n Sort not Successful...!"<<endl;
			}break;
			case 8: {
				cout<<endl<<"________________________[Add Employee]_________________________"<<endl;
				int addcode;
				bool b=false;
					cout<<"Input Number of employee= "; cin>>addcode;
					for(i=n;i<addcode+n;i++){
						cout<<"\n__________________Employee #"<<i+1<<"______________"<<endl;
						em[i].input();
					}	
					b=true;
				    cout<<"\n Add Successful..."<<endl;
			       	if(b==false)
					cout<<"\n Add not Successful...!"<<endl;
			        n=n+addcode;
			}break;
			case 9: {
				system("cls");
			}break;
		}
	}while(op!=0);
}
