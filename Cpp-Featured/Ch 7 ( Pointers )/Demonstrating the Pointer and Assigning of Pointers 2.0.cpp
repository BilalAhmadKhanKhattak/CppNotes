

// CPP program 
// Demonstrating the Pointer and Assigning of Pointer.

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int age=270;
	
	int *agepointer;  //declaring pointer
	
	agepointer=&age;  //initializing  or pointer to the address
	
	cout<<"The value of age is: "<<age<<endl;
	cout<<"The address of age is: "<<&age<<endl;
	cout<<"the value of agepointer is: "<<agepointer<<endl;
	
	return 0;
}
