/*
Use Of Scope Resoltion Operator
*/

// To access class static variables and functions.

#include<iostream>
using namespace std;

class Test
{
  private:
          static int x;
  public:
          static int y;
          
          static void fun() // static function can only access static variable
          {
            cout<<"The static variable is "<< x <<endl;
            //cout<<"A static function can only access the static variables defined the class"<<endl;
            //cout<<"This line is illegal: "<<y;
          }
};

// Accessing static varibles using the scope resolution operator.
int Test::x = 10;

int main()
{ 
  // Calling the static functions using a scope resolution operator.
  Test::fun();
  
  Test t;
  //cout<<"Accessing static variable using class object is illegal: "<< t.x << endl;
  //cout<<"Accessing static function using class object is illegal: "<< endl <<t.fun() <<endl;
  return 0;
}
