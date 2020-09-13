/*
A Nested class is a class which is declared in another enclosing class. A nested class is a member and as such has the same access rights as there own members. The members of the enclosing class have no special access to the members of nested class. The usual access rule should be obeyed.

1. Nested class can access private members of Enclosing Class.
2. Vice versa is not true.
*/

#include<iostream>
using namespace std;

class Student
{
	private:
		int rno;
		char name[10];
		
		// nested class
		class Date
		{
			int d,m,y;
			public:
			void read()
			{
				cin>>d>>m>>y;
			}
			
			void print()
			{
				cout<<d<<"-"<<m<<"-"<<y<<endl;
			}
		}dob,doj,doe; // Objects declared

	public:

		void EnclosingClassVariableAccess(Student s)
		{
			cout<<s.rno;

		}
		
		void read()
		{
			cout<<"Enter Roll Number: "<<endl;
			cin>>rno;
			cout<<"Enter Name: "<<endl;
			cin>>name;
			cout<<"Enter Date Of Birth: "<<endl;
			dob.read();
			cout<<"Enter Date Of Joining: "<<endl;
			doj.read();
			cout<<"Enter Date Of Enrollment: "<<endl;
			doe.read();
		}
		
		
		void print()
		{
			cout<<"Roll No: "<<rno<<endl;
			cout<<"Name: "<<name <<endl;
			cout<<"Date Of Birth: "<<endl;
			dob.print();
			cout<<"Date Of Joining"<<endl;
			doj.print();
			cout<<"Date Of Enroll"<<endl;
			doe.print();
		}
};

int main()
{
	Student s;
	cout<<"Enter Student Details: "<<endl;
	s.read();
	cout<<"You Have Entered: "<<endl;
	s.print();


	return 0;
}
