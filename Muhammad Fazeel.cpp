#include <iostream>
using namespace std;
class student{
	private:
		char name[15];
		float age;
		public:
		void input()
		{
			cout<<"Enter student name";
			cin>>name;
			
			cout<<"Enter student age";
			cin>>age;
			
		}
 void print(void)
 {
 	cout<<"name"<<name<<endl;
 	cout<<"age"<<age<<endl;
 }	
};
int main(){
	student student;
	student.input();
	student.print();
	return 0;
};
