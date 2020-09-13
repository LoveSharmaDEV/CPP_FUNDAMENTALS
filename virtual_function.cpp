/*
VIRTUAL FUNCTION:
1. It is a member function which is declared within the base class and is redefined by derived class. When you refer derived class object using a pointer or a reference to the base class, you can call the virtual function for that object and execute the derived class version of the function.

2. They are mainly used to achieve runtime polymorphism.

3. There is a necessity to use the single pointer to refer to all the objects to the different classes. So, we   create the pointer to the base class that refers to all the derived class. But when base class pointer contains the address of the derived class objects it always executes the the function of the base class itself not derived class. This issue can be solved by virtual functions.

Rules Of Virtual Fucntions:

1. Virtual Function cannot be static and also cannot be friend function of another class.
2. Virtual function should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
3. The prototype of the vitual class should be same in base as well as derived class.
4. A class may have a virtual destructor but not the virtual constructor.
5. It is used to tell the compiler to perform dynamic linkage or late binding.

*/




// Run Time Polymorphism or Late Binding.
/*
Run Time polymorphism is achieved only through a pointer of base class type. Also a base class pointer can point to the objects of the base class as well as objects of the derived class. In the code below bptr contains the address of object 'd' of the derived class.


Late binding (RUNTIME) is done in accordance with the content of pointer and early binding (Compile Time) is done accordance to the type of pointer, since print() function is declared with virtual keyword so it will be bound at run time and show() which is a non virtual function will be bound during complie time.

*/

#include<iostream>
using namespace std;

class base
{
	public:
		virtual void print()
		{
			cout<<"This is virtual function called in the base class: "<<endl;
		}

		void show()
		{
			cout<<"This is show function called in the base class"<<endl;
		}
};

class derived: public base
{
	public:
		void print()
		{
			cout<<"This is print function of derived class"<<endl;
		}

		void show()
		{
			cout<<"This is show function of derived class"<<endl;
		}
};

int main()
{
	cout<<"Using pointer to base class: "<<endl;
	base* bptr; // Pointer to the base class.
	bptr->show();
	cout<<endl;
      
	cout<<"Using object of derived class: "<<endl; 
	derived d;  // Object for derived class.
	d.print();
	d.show();
	cout<<endl;

        
	cout<<"Using object of base class: "<<endl;
	base bp;
	bp.print();
	bp.show();
	cout<<endl;
	
	cout<<"Implementing the run time polymorphism (late binding): "<<endl;
	bptr = &d; //refering to derived class using pointer or reference to base class.
	bptr->print(); // Virtual function binded at run time.
	bptr->show(); // Non Virtual function binded at compile time.
	cout<<endl;
	
	cout<<"Implementing the run time polymorphism (late binding) in other way"<<endl;
	base* pointer;
	pointer = &bp;
	pointer->print();
	pointer->show();

	
	


}
