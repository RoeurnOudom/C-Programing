#include<iostream>
using namespace std;
class Students{
	private:
		int id;
		string name;
		string sex;
		float score;
	public:
		void setID(int i){
			this->id=id;
			id=i;
		}
		void setName(string n){
			this->name=n;
		}
		int getID(){
			return id;
		}
		string getName(){
			return name;
		}
};
int main(){
	Students stu;
	stu.setID(1001);
	stu.setName("Sok Vanna");
	cout<<"ID= "<<stu.getID()<<endl;
	cout<<"Name= "<<stu.getName()<<endl;
}
