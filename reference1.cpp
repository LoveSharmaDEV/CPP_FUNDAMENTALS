/*
References in C++

1. When a variable is declared as reference, it becomes an alternative name for an existing variable.
2. A variable can be declared as reference by putting '&' in the declaration.
*/

#include<iostream>
using namespace std;

int main()
{
	int x = 10;

	// ref is a reference to x.
	int& ref = x;

	// Value of x is now changed to 20.
	ref = 20;
	cout<<"x: "<<x<<endl;

	// Value of x is now changed to 30.
	x = 30;
	cout<<"ref: "<<ref<<endl;

	return 0;
}
