/*
CONST in C++
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int b = 5; // declared a variable
	b = 2;  // this variable can be changed

	const int MAX_AGE = 5; // declared a constant varaible
	// MAX_AGE = 6; // This is illegal
	
	const int* a = new int; // Dynamic Memory Allocation, now you can't modify the content of the pointer.
	// *a = 2; // illegal
	a = (int*)&MAX_AGE; // you can change the pointer to point to something else, but can't change the content.
	cout<< *a <<endl;

        int* const c = new int; // Dynamic Memory Allocation, now you can modify the content of the pointer.
	*c = 2; // can change the content of the pointer.
	//b = nullptr; // illegal
	cout<< *c <<endl;




	
	return 0;
}


/* Note:
const int* a and int const* a are both same.
const* int a and int* const a are both same.
*/
