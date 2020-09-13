/*
Use Of Scope Resolution Operator
*/

// To define a function outside the class

#include<iostream>
using namespace std;

class A
{ 
  public:
          void fun(); // Only Declaration
};

void A::fun()
{
  cout<<"fun() called"<<endl;
}

int main()
{
  A a;
  a.fun();
  return 0;
}

