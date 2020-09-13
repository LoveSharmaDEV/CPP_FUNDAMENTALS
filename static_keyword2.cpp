/*
Static variable in a class
When a variable is declared as static are initialized only once as they are allocated space in separate static storage. The static varible in a class are shared by objects. There cannot be multiple copies of same static variable. There cannot be  different instances of static variables. As it is shared by different objects.
 */

#include <iostream>
 
using namespace std;

class Box {
   public:
      static int objectCount;

      static int getCount() 
      {
	      return objectCount;
      }
};

// Initialize static member of class Box
int Box::objectCount = 0;

int main(void) 
{

   cout << "Accessing static variable using static function:  " << Box::getCount() << endl;
   cout<< "Directly accessing the static variable: "<< Box::objectCount<<endl ;

   Box b1;
   cout<<"Accessing static variable through the object of the class b1: "<< b1.objectCount<<endl;

   Box b2;
   cout<<"Accessing the static variable through the object of class b2: "<<b2.objectCount<<endl;

   return 0;
}
