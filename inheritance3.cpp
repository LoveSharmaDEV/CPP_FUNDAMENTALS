/*
MULTIPLE INHERITANCE

In this type of inheritance, derived class is inherited from more than one class.
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

class FourWheeler
{
	public:
		FourWheeler()
		{
			cout<<"This is four wheeler"<<endl;
		}
};

class Car : public Vehicle, public FourWheeler
{
	public:
		Car()
		{
			cout<<"This is a car"<<endl;
		}
};

int main()
{
	Car obj;
	return 0;

}
