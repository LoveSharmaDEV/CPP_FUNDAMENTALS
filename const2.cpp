/*
CONST C++
*/

#include<iostream>
#include<string>
using namespace std;

class Entity
{
	private:
		int* m_X ,*m_Y;
		mutable int var;
	pubic:
	      	// This works only in class, now this method will not be able to change or modify any of the class variables.
	       int* GetX() const	
		{
			var = 2; // A mutable variable can be changed even in a const function.
			return m_X;
		}

		void SetX()
		{
			m_X = x;
		}

};

// Entity object address can be changed, but content can't be changed.
// Therefore if your GetX() function doesnot guarantee to not change the variabel, it can call.
// That is why we are using const functions.
void PrintEntity(const Entity& e)
{
	cout<< e.GetX() <<endl;
}


/*
Note:
const int* const GetX() const {}

First const - pointer address cant be changed, but value can't be changed.
Second const - pointer value can be changed, but address can't be changed.
Third const -  function cannot change the member variables.

*/

