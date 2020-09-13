/*
STRUCTURE IN C++:

A structure in a user-defined data type in C++. A structure creates a data type that can be usedd to group items on non similar data types.

struct structureName
{
member 1;
memebr 2;
member 3;
member 4;
}

1. Data Member: These members are normal c++ variables. We can create a strucuture with variables of different data types in C++.
2. Strucutre member cannot be initialized with declaration.
How To Declare Structure Variables:

*/

#include<iostream>
using namespace std;

struct Point1
{
	int x, y;
} p1;

struct Point2
{
	int x, y;
}

int main()
{
	struct Point p1; // The variable is declared like normal variable.
}







