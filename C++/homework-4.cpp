#include<iostream>
using namespace std;
int main(){
	float s1,s2,s3,s4,s5,total,avg;
	cout<<"______________________Input Score___________________\n";
	cout<<"Input Score1= "; cin>>s1;
	cout<<"Input Score2= "; cin>>s2;
	cout<<"Input Score3= "; cin>>s3;
	cout<<"Input Score4= "; cin>>s4;
	cout<<"Input Score5= "; cin>>s5;
	total=s1+s2+s3+s4+s5;
	avg=total/5;
	cout<<"______________________Output Score___________________\n";
	cout<<"Total= "<<total<<endl;
	cout<<"Average= "<<avg<<endl;
	if(avg>90 && avg<=100){
		cout<<"Student Got Grade *A* ";
	}else if(avg>80 && avg<=90){
		cout<<"Student Got Grade *B* ";
	}else if(avg>70 && avg<=80){
		cout<<"Student Got Grade *C* ";
	}else if(avg>60 && avg<=70){
		cout<<"Student Got Grade *D* ";
	}else if(avg>50 && avg<=60){
		cout<<"Student Got Grade *E* ";
	}else{
		cout<<"Student Got Grade *F* ";
	}
}
