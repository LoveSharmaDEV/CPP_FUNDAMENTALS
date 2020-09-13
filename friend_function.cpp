/*
 FRIEND FUNCTION:

1. A friend function of a class is defined outside that class scope but it has the right to access all private and protected members of the class.
2. Even though the prototypes for friend function appear in the class definition, friends are not member functions.

Why do we need friend function?
1. Special Case when class's private data needs to be accessed directly without using objects for that class.
2. Operator Overloading
*/

#include<iostream>
using namespace std;


class Distance
{
	private:
		int meters;
	public:
		Distance()
		{
			meters = 0;
		}

		void display()
		{
			cout<<"Meters Value "<< meters <<endl;
		}

		//Prototype Of Friend Function
		friend void addValue(Distance &d);
};

void addValue(Distance &d)
{
d.meters = d.meters+5; 
}


int main()
{
	Distance d1;
	d1.display();

	addValue(d1); // Pass By Reference
	d1.display();
	return 0;
}












































