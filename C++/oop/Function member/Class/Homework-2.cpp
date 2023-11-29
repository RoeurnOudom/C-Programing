#include<iostream>
#include<iomanip>
using namespace std;
class Student{
	private:
		int id;
		char name[20],gender;
		float s1,s2,s3;
	public:
		void Input(){
			 cout<<"_____________________Input Student Information___________________\n";
			cout<<"Input ID= "; cin>>id;
			cout<<"Input Name= "; cin.ignore(); cin.getline(name,20);
			cout<<"Input Gender= "; cin>>gender;
			cout<<"Input Score1= "; cin>>s1;
			cout<<"Input Score2= "; cin>>s2;
			cout<<"Input Score3= "; cin>>s3;
	}
	    double Total(){
	    	float total;
	    	total=s1+s2+s3;
	    	return total;
		}
		double Average(){
			float avg;
			avg=Total()/3;
			return avg;
		}
		char Grade(){
			char grade;
			if(Average() >90 && Average()<=100){
				grade='A';
			}else if(Average() >80 && Average()<=90){
				grade='B';
			}else if(Average() >70 && Average() <=80){
				grade='C';
			}else if(Average() >60 && Average()<=70){
				grade='D';
			}else if(Average()>50 && Average()<=60){
				grade='E';
			}else{
				grade='F';
     	    }
     	    return grade;
	   	}
        void Output(){
	        cout<<"_____________________Ouput Student Information___________________\n";
		 	cout<<left<<setw(10)<<"ID"<<setw(10)<<"Name"<<setw(10)<<"Gender"<<setw(10)<<"Score1"<<setw(10)<<"Score2"<<setw(10)<<"Score3"<<setw(10)<<"Total"<<setw(10)<<"Average"<<setw(10)<<"Grade"<<endl;
            cout<<left<<setw(10)<<id<<setw(10)<<name<<setw(10)<<gender<<setw(10)<<s1<<setw(10)<<s2<<setw(10)<<s3<<setw(10)<<Total()<<setw(10)<<Average()<<setw(10)<<Grade()<<endl;
		}
};
int main(){
	Student obj; 
	obj.Input(); 
	obj.Output(); 	
}
