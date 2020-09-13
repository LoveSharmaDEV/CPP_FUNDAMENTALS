/*
Scope of variables in c++.

Scope is defined as the extent up to which something can be worked with. In programming also the scope of a variable is defined as the extent of the program code within which the variable can be accessed or declared or worked with.

The two types of variable scopes are:
1. Local Variables
2. Global Variables

*/

/*
LOCAL VARIABLES:

Variables defined within a function or block are said to be local to those functions.
1. Anything between '{' and '}' is said to be inside a block.
2. Local variables do not exist outside the block in which they are declared.
*/

#include<iostream>
using namespace std;

void func()
{
	int age = 18;
}

int main()
{
	cout<<"AGE IS : "<<age;
	return 0;
}

// Above code would give error. Because age variable is local to function func() and can't be accessed outside the function.

// Rectifying above code:

#include<iostream>
using namespace std;
 void func()
{
	int age = 23;
	cout<<"The age is:"<<age <<endl;
}

int main()
{

	return 0;
}

