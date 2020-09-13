/*
DESTRUCTORS:
Destructors is a member function which destructs an object

A destructor function is called automatically when the object goes out of scope.
1. The function ends.
2. The program ends.
3. A block containing local variables end.
4. A delete operator is called.

There can only be one destructor in a class with class name preceded by ~, no parameters and no return type.
 */

#include <iostream>
using namespace std;
class HelloWorld
{
	public:
		//Constructor
		HelloWorld()
		{
			cout<<"Constructor is called"<<endl;
		}
		
		//Destructor
		~HelloWorld()
		{
			cout<<"Destructor is called"<<endl;
		}
		
		//Member function
		void display()
		{
			cout<<"Hello World!"<<endl;
		}
};
int main()
{
   
	//Object created
   
	HelloWorld obj;
   
	//Member function called
   
	obj.display();
   
	return 0;
}
