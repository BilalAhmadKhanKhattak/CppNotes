

// CPP program
// Passing Arguments by Variable 
// Example 2


#include<bits/stdc++.h>

using namespace std;

void show(int x, int y);

int main ()
{
	int x, y;
	
	cout<<"Enter two numbers : "<<endl;
	cin>>x>>y;
	
	show(x,y);
	
	return 0;
}

void show(int x, int y)
{
	cout<<"The value of x is = "<<x<<endl;
	
	cout<<"The value of y is = "<<y;
}
