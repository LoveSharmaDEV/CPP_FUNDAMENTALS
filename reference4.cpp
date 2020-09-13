/*
In for each loops to modify all objects:
We can use references in for each loops to modify all elements
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vec{10, 20, 30, 40};

	// We can modify elements if we use reference
	for(int &x: vec)
	{
		x = x+ 5;
	}

	//printing elements
	for(int x: vec)
	{
		cout<<x<<" ";
	}

	return 0;

}
