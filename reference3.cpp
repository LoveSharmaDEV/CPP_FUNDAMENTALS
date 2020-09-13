/*
Avoiding copy of large structures

Imagina a function that has to recieve a large object. If we pass it without reference, a new copy of it would be created that would led to CPU wastage.
We can use references to avoid this.
*/


#include<iostream>
using namespace std;

	 struct Student
	 {
		 string name;
		 string address;
		 int rNo;
	 };


	 void printstruct(Student &s)
	 {
		 cout<<s.name<<" "<<s.address<<" "<<s.rNo<<endl;
	 }

int main()
{


	 Student a;
	 a.name="Love Sharma";
	 a.address="Gurugram";
	 a.rNo = 32;

	 printstruct(a);

}
