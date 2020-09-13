/*
Use of Scope Resoltion Operator:
*/


// To access global variable when there is local variable with same name.

#include<iostream>
using namespace std;


// Defining a global variable
int x=0;

int main()
{
 // Defining a local variable
 int x = 10;
 cout<<"The local variable is: "<< x <<endl;
 cout<<"The global variable is: "<< ::x<<endl;
 return 0; 
}


