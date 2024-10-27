

// CPP Program 
// Reads 10 Integers in an Array and Prints the Largest Number using For loop.


#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int x[10], c, max=0;
	
	cout<<"Enter 10 integers seperated by space: "<<endl;
	
	for(c=0;c<=10;c++)
	{
		cin>>x[c];
	}
	
	for(c=0;c<=10;c++)
	{
		if(max<x[c])
		{
			max=x[c];
		}
	}
	
	cout<<"The largest number is: "<<max;
	
	return 0;
}
