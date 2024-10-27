

// CPP program that
// Demosntrates the Inline Function.
// Inline Function Speeds Up the Execution of Function when Envoked.


#include<bits/stdc++.h>

using namespace std;

inline int min(int a, int b)
{
		
	if(a>b)
	{
		cout<<"The min number is "<<b;
	}
	
	else if(a<b)
	{
		cout<<"the min number is "<<a;
	}
	
	else
	{
		cout<<"Both are equal ";
	}
	
	//return a>b?b:a;
}
int main()
{
	int x, y;
	
	cout<<"Enter 2 numbers = ";
	cin>>x>>y;
	
	min(x,y);
	
	//cout<<"The min number is "<<min(x,y);
	
	return 0;
	
}
