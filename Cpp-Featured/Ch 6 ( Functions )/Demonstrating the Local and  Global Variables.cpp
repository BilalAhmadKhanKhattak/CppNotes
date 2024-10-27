

// CPP program 
// Demonstrating the Local and Global Function.


#include <bits/stdc++.h>

using namespace std;

int addition();			//function signature / prototype

int x,y,z;				// global variables, can be accesed from anywhere by anyone

int addition()
{
	int sum;			//local variables, can only be accesed with in the Function
	sum=x+y+z;
	return sum;
}

int main ()
{
	int total;			//local variables
	
	cout<<"Enter three integers : "<<endl;
	cin>>x>>y>>z;
	
	total=addition();		//Fucntion call/envoke
	
	cout<<"The sum of three global variables is : "<<total;
	
	return 0;
}
