#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class person{
	protected:
		int id;
		char name[20];
		char gender;
		public:
			person(){
				id=0;
				strcpy(name,"None");
				gender='m';
			}
			person(int id,char name[20],char gender){
		        this->id=id;
				strcpy(this->name,name);
				this->gender=gender;
			}
			void Input(){
				cout<<"Input ID= "; cin>>id;
				cout<<"Input Name= "; cin>>name;
				cout<<"Input Gender= "; cin>>gender;
			}
			void Output(){
				cout<<"ID= "<<id<<endl;
				cout<<"Name= "<<name<<endl;
				cout<<"Gender= "<<gender<<endl;
			}
};
class point:public person{
	private:
		float s1,s2,s3,total,avg;
		public:
			point(){
				person:person();
				s1=0;
				s2=0;
				s3=0;
				total=0;
				avg=0;
			}
		    point(int id,char name[20],char gender,float s1,float s2,float s3){
				this->id=id;
				strcpy(this->name,name);
				this->gender=gender;
				this->s1=s1;
				this->s2=s2;
				this->s3=s3;
				total=s1+s2+s3;
				avg=total/3;
			}
			void Input(){
				person::Input();
				cout<<"Input Score1= "; cin>>s1;
				cout<<"Input Score2= "; cin>>s2;
				cout<<"Input Score3= "; cin>>s3;
				total=s1+s2+s3;
				avg=total/3;
			}
			void Output(){
				person::Output();
				cout<<"Score1= "<<s1<<endl;
				cout<<"Score2= "<<s2<<endl;
				cout<<"Score3= "<<s3<<endl;
				cout<<"Total= "<<total<<endl;
				cout<<"Average= "<<avg<<endl;
			}
};
int main(){
  point obj;
  obj.Output();
  point obj1(1,"oudom",'m',100,90,80);
  obj1.Output();
  obj.Input();
  obj.Output();
}
