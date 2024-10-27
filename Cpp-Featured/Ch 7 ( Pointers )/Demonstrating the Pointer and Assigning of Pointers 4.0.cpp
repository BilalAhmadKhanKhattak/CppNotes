

// CPP program 
// Demonstrating the Pointer


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x=2;
	float y=2.5;
	
	int *xpointer;
	xpointer=&x;
	
	float *ypointer;
	ypointer=&y;
	
	cout<<"The value of x is: "<<x<<endl;
	cout<<"The address of x is: "<<xpointer<<endl;
	
	cout<<"The value of y is: "<<y<<endl;
	cout<<"The address of y is: "<<ypointer<<endl;
	
	return 0;
	
}
