#include<iostream>
using namespace std;
int main(){
   int id;
   string name;
   char word[20];
   cout<<"Input ID= ";cin>>id;
  // cout<<"Input Name= ";cin>>name;
  cout<<"Input Name= "; cin.ignore(); getline(cin,name);
  cout<<"Input Word= "; cin.ignore(); cin.getline(word,20);
   cout<<"ID= "<<id<<endl;
   cout<<"Name= "<<name<<endl;
   cout<<"Word= "<<word<<endl;
}
