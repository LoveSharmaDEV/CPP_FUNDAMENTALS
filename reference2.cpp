/*
Modify the passed parameters in a function.
If a function receives a reference to variable, it can modify the value of the variable.
*/

#include<iostream>
using namespace std;

void swap(int& first, int& second)
{
	int temp = first;
	first = second;
	second = temp;
}

int main()
{
	int a = 2, b = 3;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
	return 0;
}
