/*
Constructors are basically used for intialization of class variables, and it can be done in various ways
*/

#include<iostream>
using namespace std;

class Demo
{
	private:
		int a ;
		char b ;
		double c;
	public:
		Demo(int x) : a(x)
	        {
			cout<<"Value of a is: "<< a <<endl;
		}
	        
	        Demo(char y) : b(y)
		{
			cout<<"Value of b is: "<< b << endl;
		}
	       
	        Demo(double z) : c(z)
		{
		        cout<<"Value of c is: "<< c <<endl;
		}	
};

int main()
{
	Demo obj1(2);
	Demo obj2('l');
        Demo obj3(3.56);	
}


