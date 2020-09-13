/* Multilevel Inheritance

In this type of class derived class is inherited from another derived class
*/
#include<iostream>
using namespace std;

// base class

class Vehicle
{

	public:
		Vehicle()
		{
			cout<<"This is a vehicle"<<endl;
		}
};

class fourWheeler : public Vehicle
{
	public:
		fourWheeler()
		{
			cout<<"This is object with 4 wheels"<<endl;
		}
};

class Car : public fourWheeler
{
	public:
		Car()
		{
			cout<<"Car has 4 Wheels"<<endl;
		}
};

int main()
{
	Car obj;
	return 0;
}
