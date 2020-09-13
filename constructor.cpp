/*
What Is Constructors:

A constructor is a member function of a class which initializes objects of a class. In C++ constructors are called by themselves when a object is created.

1. A Constructor is named as the class itself.
2. Constuctors don't have the return type.
3. A constructor is automatically called when an object is created.

COPY CONSTRUCTORS: A Copy Constructors is a member function which initializes an object using another object of the same class.
*/

// DEFAULT CONSTRUCTORS
// PARAMETERIZED CONSTRUCTORS
// COPY CONSTRUCTORS

#include<iostream>
using namespace std;

class construct
{
	public:
		int a, b;

		construct()
		{
			cout<<"DEFAULT CONSTRUCTOR CALLED: "<<endl;
			a = 10;
			b = 20;
		}

		construct(int x, int y)
		{
			cout<<"PARAMETERIZED CONSTRUCTOR CALLED: "<<endl;
			a = x;
			b = y;
		}

};

int main()
{
	construct c1;
	cout<<"a: "<<c1.a<<" b: "<<c1.b<<endl;

	construct c2(11, 21);
	cout<<"a: "<<c2.a<<" b: "<<c2.b<<endl;

	construct c3 = construct(12, 13);
        cout<<"a: "<<c3.a<<" b: "<<c3.b<<endl;

	return 0;
}
