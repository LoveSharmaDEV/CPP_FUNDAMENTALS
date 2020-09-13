#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int var = 8; // First we initialize a variable with value 8, in some memory location.
	cout<<"Address of this variable in memory is "<<&var<<endl;


        // Now we will create a pointer, and initialize it with this above address.
	int* ptr1 = &var;


	// ptr1 is a pointer to a integer, that means ptr1 would be storing the address of variable var.
	// And on dereferencing ptr1 we will get the value stored in that address
	cout<<"Address pointed by the  pointer is: "<< ptr1<< endl;
	cout<<"On deferencing the pointer we will get: "<< *ptr1<< endl;


	// Now we created a pointer to a character and have reserved 8 bytes in the memory, forming a character array.
	//  Using memset we can fill these 8 bytes. Syntax:  memset(pointer , value, size);
	char* buffer = new char[8];
	memset(buffer, 0, 8);


	// buffer+1 will increment with the size of 8 bytes.
	cout<<"size of the character array: "<<endl; 
	cout<<sizeof(buffer)<<endl;
	cout<<"No of elements in character array: "<<endl;
	cout<<sizeof(buffer)/sizeof('a')<<endl;


	// Double and triple pointers
	// *(*(dp)) - dp is having a address, *dp contains value in that address,**dp have value in that value address
	int **dp , ***tp , *p;
	p = &var;
	dp = &p;
	tp = &dp;	
	cout<< *p << **dp << ***tp<< endl;

	// pointer to a array
	int A[] = {5,6,7,8,9};
	int* AR = A;

        // AR will increment with the value of integer size to point to the next value inside the array
	cout<<"Viewing the increment for AR"<<endl;
	cout<<AR<<" "<< (AR+1) <<" "<<endl;
	cout<< *AR <<endl;
	cout<< *(AR+1) <<endl;

	






}
