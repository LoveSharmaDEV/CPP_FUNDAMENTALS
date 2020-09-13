/*
 Class objects as static
 Just like variables, objects also when declared as static have a scope till the lifetime of program.
 In below given example the scope objects is over when the bracket within which object is declared exits. But in case of static objects, the object is not dead until the end of whole program. Therefore the destructor is called at the end, not when the scope of object is exited. 
 */

#include<iostream> 
using namespace std; 
  
class GfG 
{ 
    int i; 
    public: 
        GfG() 
        { 
            i = 0; 
            cout << "Inside Constructor\n"; 
        } 
        ~GfG() 
        { 
            cout << "Inside Destructor\n"; 
        } 
}; 
  
int main() 
{ 
    int x = 0; 
    if (x==0) 
    { 
       static GfG obj; 
    } 
    cout << "End of main\n"; 
} 
