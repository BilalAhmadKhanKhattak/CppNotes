

// CPP Program 
// Explains the use of Function
// Using it as a Sum Function.


#include<bits/stdc++.h>
using namespace std;

int sum(int x, int y);			// Function Prototype

int main()
{
	int a,b,c;
	
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	
	c=sum(a,b); 				// Passing to the Function
	cout<<c;
}

int sum(int x, int y)
{
	
	return (x+y);
	
}
