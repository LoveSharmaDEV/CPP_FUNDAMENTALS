/*
String Methods:
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 = "Hi My Name Is Love Sharma";
	cout<< s1 << endl<<endl;
	s1.erase(1); // Erases from the specified index till end.
	cout<<"Erased string is: "<< s1<<endl;

	string s2 ="Hi My Name Is Love Sharma"; 
	s2.replace(14, 4, "Kush");
	cout<<"Modified string is: "<<s2<<endl;

	s2.insert(14, "Love and ");
	cout<<"Modified String is : "<<s2<<endl;
}
