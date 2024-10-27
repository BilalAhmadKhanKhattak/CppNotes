

// CPP program
// Demonstrating the Return Statements

#include<bits/stdc++.h>

using namespace std;

int cube(int a);

int main ()
{
	int x,z;
	
	cout<<"Enter a number = ";
	cin>>x;
	
	z=cube(x);
	
	cout<<"The cube is = "<<z;
}

int cube(int a)
{
	int z;
	
	z=a*a*a;
	
	return z;    //returning
}
