#include <iostream>
using namespace std;
class Student{
	private:
	int roll_no;
	char name[15];
	public:
		void input()
		{
			cout<<"enter roll number of student";
			cin>> roll_no;

			cout<<"Enter student name";
			cin>>name;
		}

	void print(void)
{

cout<<"roll number"<<roll_no<<endl;
cout<<"Name"<<name<<endl;
}
};
int main(){
	Student student;
	student.input();
	student.print();
	return 0;
};
