#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
using namespace std;
class Worker{
	private:
		int id;
		char name[20],gender;
		int rate,hours;
		float salary,income;
	public:
		void input(){
			cout<<"Input ID= "; cin>>id;
			cout<<"Input Name= "; cin>>name;
			cout<<"Input Gender= "; cin>>gender;
			cout<<"Input Rate= "; cin>>rate;
			cout<<"Input Hour= "; cin>>hours;
			cout<<"Input Salary= "; cin>>salary;
		}
		int getID(){
			return id;
		}
		char *getname(){
			return name;
		}
		float Income(){
			income=salary+(rate*hours);
			return income;
		}
		void output(){
			cout<<left<<setw(10)<<id<<setw(10)<<name<<setw(10)<<gender<<setw(10)<<rate<<setw(10)<<hours<<setw(10)<<salary<<setw(10)<<income<<endl;
		}
};
        void header(){
	    	cout<<left<<setw(10)<<"ID"<<setw(10)<<"Name"<<setw(10)<<"Gender"<<setw(10)<<"Rate"<<setw(10)<<"Hour"<<setw(10)<<"Salary"<<setw(10)<<"Income"<<endl;
		}
int main(){
	int n,i,op;
	Worker *ptr;
		do{
		cout<<endl<<"___________________[ M E N U ]__________________"<<endl;
		cout<<"1.Input"<<endl;
		cout<<"2.Income"<<endl;
		cout<<"3.Output"<<endl;
		cout<<"4.Search"<<endl;
		cout<<"5.Maximum"<<endl;
		cout<<"6.Minimum"<<endl;
		cout<<"7.Equal"<<endl;
		cout<<"8.Sort"<<endl;
		cout<<"9.Sum"<<endl;
		cout<<"10.Update"<<endl;
		cout<<"11.Insert"<<endl;
		cout<<"12.Delete"<<endl;
		cout<<"Please choose one option(1-12)= "; cin>>op;
		switch(op){
			case 1: {
				    cout<<endl<<"___________________[Input Worker]__________________"<<endl;
		        	cout<<"Input Number of Worker= "; cin>>n;
		        	ptr=(Worker*)calloc(n,sizeof(Worker));
		        	for(i=0;i<n;i++){
		        		cout<<"\n__________________Worker #"<<i+1<<"______________"<<endl;
		        	    (ptr+i)->input();
					}
			}break;
			case 2:	{
				cout<<endl<<"_____________________[Output Income]__________________"<<endl;
				for(i=0;i<n;i++){
					 (ptr+i)->Income();
				}	
				cout<<"\n Successful..."<<endl;
			}break;
			case 3:	{
				cout<<endl<<"_____________________[Output Worker]__________________"<<endl;
				header();
				for(i=0;i<n;i++){
					(ptr+i)->output();
				}	
			}break;
//			case 4:{
//				cout<<endl<<"_____________________[Search Worker]__________________"<<endl;
//				char sop;
//				bool b=false;
//				cout<<"a. Input Worker Search by ID"<<endl;
//				cout<<"b. Input Worker Search by Name"<<endl;
//				cout<<"Inpurt One Option to Search= "; cin>>sop;
//				switch(sop){
//					case 'a' : {
//						    int sid;
//						    cout<<"Input ID to Search= "; cin>>sid;
//						    	for(i=0;i<n;i++){
//								if(sid==(ptr+i)->getID()){
//									header();
//									(ptr+i)->output();
//									b=true;
//									cout<<"\nSearch Successful..."<<endl;
//								}
//							}	
//							if(b==false)
//								cout<<"\n Search ID not Found...!"<<endl;
//					}break;
//					case 'b' : {
//						    char sname[20];
//						    cout<<"Input Name to Search= "; cin>>sname;
//						    	for(i=0;i<n;i++){
//								if(stricmp(sname,(ptr+i)->getname())==0){
//									header();
//									(ptr+i)->output();
//									b=true;
//									cout<<"\nSearch Successful..."<<endl;
//								}
//							}	
//							if(b==false)
//								cout<<"\n Search Name not Found...!"<<endl;
//					}break;
//				}
//		}break;
//		    case 5: {
//		    	  cout<<endl<<"_____________________[Maximum Income]__________________"<<endl;
//		          float max_income=ptr[0].Income();
//		          Worker temp=ptr[0];
//		          for(i=0;i<n;i++){
//		          	if(max_income < ptr[i].Income()){
//		          		max_income=ptr[i].Income();
//		          		temp=ptr[i];
//					  }
//				  }
//				  header();
//				  temp.output();
//			}break;
//			case 6: {
//		    	  cout<<endl<<"_____________________[Minimum Income]__________________"<<endl;
//				   float mini_income=ptr[0].Income();
//		           Worker temp=ptr[0];
//		           for(i=0;i<n;i++){
//		          	if(mini_income > ptr[i].Income()){
//		          		mini_income=ptr[i].Income();
//		          		temp=ptr[i];
//					  }
//				  }
//				  header();
//				  temp.output();
//			}break;
//			case 7: {
//		    	  cout<<endl<<"_____________________[Equal Income]__________________"<<endl;
//			}break;
//			case 8: {
//				  bool b=false;
//				  int j;
//		    	  cout<<endl<<"_____________________[ Sort ]__________________"<<endl;
//				  Worker temp1;
//				  for(i=0;i<n;i++){
//				  	for(j=i;j<n;j++){
//				  		if(ptr[i].Income() < ptr[j].Income()){
//				  			temp1=ptr[i];
//				  			ptr[i]=ptr[j];
//				  			ptr[j]=temp1;
//				  			b=true;
//						  }
//					  }
//				  }
//				  if(b==false)
//				  cout<<"\n Sort not successful...!"<<endl;
//				  else{
//				  	cout<<"\nSort Successful..."<<endl;
//				  }
//			}break;
//			case 9: {
//				  int sum=0;
//				  bool b=false;
//		    	  cout<<endl<<"_____________________[ Sum  ]__________________"<<endl;
//				  for(i=0;i<n;i++){
//				  	sum=sum+ptr[i].Income();
//				  }
//				  cout<<"Sum= "<<sum<<"$"<<endl;
//			}break;
//			case 10: {
//		    	    cout<<endl<<"_____________________[ Update  ]__________________"<<endl;
//			      	float up[20];
//					for(i=0;i<n;i++){
//						if(ptr[i].Income() < 150){
//						   up[i]=ptr[i].Income()+(ptr[i].Income()*0.15);
//						}
//					}
//					for(i=0;i<n;i++){
//						cout<<"Salary after Update #"<<i+1<<"= "<<up[i]<<"$"<<endl;
//					}
//			}break;
//			case 11: {
//		    	    cout<<endl<<"_____________________[ Insert  ]__________________"<<endl;
//			        int inid,j;
//			        bool b=false;
//					cout<<"Input ID for Insert= "; cin>>inid;
//					for(i=0;i<n;i++){
//						if(inid==(ptr+i)->getID()){
//							for(j=n;j>=i;j--){
//								ptr[j]=ptr[j-1];
//				//				*(ptr+j) = *(ptr+j-1);
//							}
//							n++;
//							(ptr+i)->input();
//							b=true;
//						    cout<<"\nInsert Successful..."<<endl;
//						    break;
//						}
//					}	
//				if(b==false)
//					cout<<"\n Insert not Successful...!"<<endl;
//			}break;
            case 11:{
        int inid,j;
        bool check=false;
        cout<<"==============Insert============\n";
        cout<<"Input ID to Insert= ";cin>>inid;
        for(i=0;i<n;i++){
          if(inid==(ptr+i)->getID()){
            for(j=n;j>i;j--){
//              ptr[j]=ptr[j-1];
              *(ptr+j) = *(ptr+j-1);
            }
            n++;
            (ptr+i)->input();
            check=true;
            cout<<"Insert success"<<endl;
            break;
          }
        }
        if(check==false){
          cout<<"Insert not success"<<endl;
        }
        break;
      }
			case 12: {
				  int sid,j;
				  bool b=false;
		    	  cout<<endl<<"_____________________[ Delete  ]__________________"<<endl;
				  cout<<"Input ID for Delete= "; cin>>sid;
			        for(i=0;i<n;i++){
			        	if(sid==ptr[i].getID()){
			        		for( j=i;j<n;j++){
			        			ptr[j]=ptr[j+1];
							}
							n--;
							b=true;
						}
					}
					if(b==false){
						cout<<"\n Delete not Successful...!"<<endl;
					}else{
					   	cout<<"\n Delete Successful...!"<<endl;	
					}
			}break;
}
	}while(op!=0);
}
