/*
CLASS TEMPLATES DEFAULT DATA PARAMETERS
*/

#include<iostream>
using namespace std;

template <class T1=int , class T2=float>

class Template2
{
	public:
		T1 a;
		T2 b;

		Template2(T1 x, T2 y)
		{
			a = x;
			b = y;
		}

		void display()
		{
			cout<<"The value of a is: "<< a <<endl;
			cout<<"The value of b is: "<< b <<endl;
		}
};

int main()
{
	Template2<> obj1(4, 6.4);
	obj1.display();

	Template2<char,int> obj2('c' , 3);
	obj2.display();

	return 0;

}

