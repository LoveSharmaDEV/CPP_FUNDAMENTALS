/*
GLOBAL VARIABLES
*/

#include<iostream>
using namespace std;

int global = 5; // This is a global variable, can only be accessed form the entire program.

void display()
{
	cout<<global<<endl;
}

int main()
{
	display();

	global = 10;
	display();

	return 0;
}


// NOTE: What if function have local variable of same name:

#include<iostream>
using namespace std;


int global = 5;
int main()
{
	int global = 3;
	cout<<"The local variable is "<< global<<endl;
	cout<<"The global variable is "<< ::global<<endl;
	return 0;
}

