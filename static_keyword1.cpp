/*
Static variable in a function
When a variable is declared as static, space for it gets allocated for the life time of the program. Even if function is called multiple times, space for static variable is allocated only once and value is carried through the next function call. Static variables are declared only once.
*/

#include<iostream>
#include<string>
using namespace std;

void demo()
{
	static int count = 0;
	cout<<count<<" ";
	count++;
}

int main()
{
	for(int i=0; i<5; i++)
	{
		demo();

	}
	cout<<endl;

	return 0;
}





