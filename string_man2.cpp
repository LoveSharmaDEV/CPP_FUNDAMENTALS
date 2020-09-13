/*
String Methods.
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 = "Love Sharma";
	// substr method for string
	cout<< s1.substr(0,4)<<endl;

	string one = "abcdef";
	string two = "ghijkl";

	cout<<"Initial Strings Are: "<<one<< " " <<two<<endl;
	one.swap(two);
	cout<<"Now the strings are: "<<one << " "<<two<<endl;

	string s3 = "Hey this is Love Sharma";
	cout<<s3.find("Love")<<endl; // Gives the first occurence.
	cout<<s3.rfind("Love")<<endl; // Gives the last occurence.
}


