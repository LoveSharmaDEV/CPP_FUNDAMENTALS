/*
Operator Overloading

1. C++ allows you to specify more than on definition for an operator in the same scope, which is called operator overloading.
2. You can redefine or overload most of the built-in operators available in C++
3. It is a type of polymorphism in which an operator is overloaded to give user defined meaning to it.
4. Almost any operator can be overloaded in C++. However there are few operator which can not be overloaded. Operator that cannot be overloaded are:
 . Scope Operator (::)
 . sizeof()
 . member selector (.)
 . member pointer selector (*)
 . ternary operator (?:)

*/
#include<iostream>
using namespace std;

class Complex
{
	private:
		int real, img;
	public:
		Complex()
		{
			real = 0;
			img = 0;
		}
		Complex(int r , int i )
		{
			real = r;
			img = i;
		}

		void print()
		{
			cout<< real<<" + "<<img<<"i"<<endl;
		}

                // Operator overloading (Binary Operator)
		Complex operator +(Complex c)
		{
			Complex temp;
			temp.real = real + c.real;
			temp.img = img + c.img;
			return temp;
		}


};

int main()
{
	Complex c1(5,4 );
	Complex c2(2,5);
	Complex c3(1,1);
	Complex c4;
	c4 = c1 + c2 + c3; // c1.add(c2) this is how compiler see this.

	c4.print();


	//int x = 5;
	//int y = 4;
	//int z = x+y;
	//cout<<"z value: "<<z<<endl;


	return 0;
}


