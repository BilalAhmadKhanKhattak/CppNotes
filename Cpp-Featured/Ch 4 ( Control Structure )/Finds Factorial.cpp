

// CPP Program 
// Finds Factorial of the Entered Integer.


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,fact=1;
	
	cout<<"Enter the number = ";
	cin>>x;
	
	for(y=1;y<=x;y++)
	{
		fact=fact*y;
	}
	
	cout<<fact;
	
}
