

// CPP program that 
// Demonstrates the Execution of Default Arguments
// and Execution of Passing 1 or 2 Arguments.

#include<bits/stdc++.h>

using namespace std;

int divide(int a, int b=2);   //default arguments

int main ()
{
	cout<<"Results by providing one arguments = "<<divide(12)<<endl<<endl;		// Passing One Arguments.
	
	cout<<"Results by providing two arguments = "<<divide(12,3);				// Passing Two Arguments.
	
	return 0;
}

int divide(int a, int b)		// Functions
{
	return(a/b);
}
