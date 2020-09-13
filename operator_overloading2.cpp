/*
Operator Overloading (Unary Operator)
*/

#include<iostream>
using namespace std;

class Weight
{
	private:
		int kg;
	public:
		Weight()
		{
			kg = 0;
		}

		Weight(int x)
		{
			kg = x;
		}

		void printWeight()
		{
		cout<<"Weight in KG: "<< kg <<endl;
		}

		Weight operator ++() // pre-increment
		{
			Weight temp;
			temp.kg = ++kg;
			return temp;
		}

		Weight operator ++(int) // post-increment
		{
			Weight temp;
			temp.kg = kg++;
			return temp;
		}
};

int main()
{

	int a =0 , b =0;
	b = a++; // post-increment
	cout<<"Value of b: "<< b<< endl;

	a = 0;
	b = 0;
	b = ++a; // pre-increment
	cout<<"Value of b:" <<b<<endl;
	
	
	Weight obj1(11);
	++obj1;
	obj1.printWeight();

	Weight obj2(10);
	obj2++;
	obj2.printWeight();

	Weight obj3, obj4(10);
	obj3 = obj4++; // Post-increment
	obj3.printWeight();

	Weight obj5, obj6(10);
	obj5 = ++obj6; // Pre-increment
	obj5.printWeight();

	return 0;
}



