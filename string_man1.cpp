/*
STRINGS: Sequence Of Characters is basically called as strings.
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{       

         // TAKING INPUT
         /*
	string Love1; // String Declaration
	cin>> Love1;
	// Note: cin reads the string upto only first white space.
	cout<<"The String Value Inputed Is : "<< Love1 <<endl;
	*/
	
	string Love2;
	getline(cin , Love2);
	cout<<"The String You Entered Are: "<< Love2<< endl;
	
	// STRING INITIALIZING
	string Love3 = "Hello Everyone 1";
	string Love4("Hello Everyone 2");
	
	
	// STRING ASSIGNING
	string Love5 , Love6;
	Love5 = Love4;
	Love6.assign(Love4);
	cout<<"The string you copied are: "<<Love5<< " " <<Love6<<endl;
	
	
	// STRING INDEXING
	string Love7 = "This is me";
	cout<< "Printing string using index : "<< Love7[0]<<endl;
	cout<< "Printing string using index : "<< Love7.at(0)<<endl;
	
	
	
	// STRING SIZE
	string Love8 = "length";
	cout<<"The length of string is: "<<Love8.length()<<endl;
	cout<<"The length of string is: "<<Love8.size()<<endl;	
			
	
}
