/*
Static Function In A Class:

Just like static data members or static variables inside the class, does not depend upon the objects of class, similarly these static functions are also not dependent on the objects of the class. The can be called usig=ng objects as well as directly through class name using scope resolution operator.

A static function is allowed to access only static variables/data members or other static functions.
*/


#include<iostream> 
using namespace std; 
  
class GfG 
{ 
   public: 
      
    // static member function 
    static void printMsg() 
    { 
        cout<<"Welcome to GfG!"; 
    } 
}; 
  
// main function 
int main() 
{ 
    // invoking a static member function 
    GfG::printMsg(); 
} 


