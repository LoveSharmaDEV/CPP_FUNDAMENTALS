/*
INHERITANCE IN C++ :
The capability of a class to derive properties and characteristics from another class is called inheritance.
Inheritance is one of the most important feature of OOPS.

1. SUB_CLASS = The class that inherits properties from an other class is called Sub-class or derived class.
2. SUPER_CLASS = The class whose properties are inherited by sub class is called base class or super class.

INHERITANCE MODES:

BASE CLASS             INHERITANCE TYPE 
MEMBER ACCESS
SPECIFIER

                    PUBLIC     PROTECTED     PRIVATE

1. PUBLIC           PUBLIC     PROTECTED     PRIVATE
2. PROTECTED        PROTECTED  PROTECTED     PRIVATE 
3. PRIVATE          NOT ACC    NOT ACC       NOT ACC

TYPES OF C++ INHERITANCE

1. Single Inheritance
2. Multiple Inheritance
3. Multilevel Inheritance
4. Hierarchical Inheritance

*/



/*
Single Level Inheritance 

In this a class is allowed to inherit from only one class, i.e one sub class is inherited by one base class
*/

#include<iostream>
using namespace std;

class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"This is vehicle"<<endl;
		}

};

class Car : public Vehicle
{
	public:
		Car()
		{
			cout<<"This is car"<<endl;
		}

};

int main()
{
	Car obj;
	return 0;
}

