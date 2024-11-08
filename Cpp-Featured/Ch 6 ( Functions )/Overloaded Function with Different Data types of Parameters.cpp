

// CPP program
// Overloaded function using different types of Parameters

// ?? Though it's working But There are a bit Complications with this Program
// Must better than this, Ponder and Rewrite properly.


#include<bits/stdc++.h>

using namespace std;

void multiply(int a, int b);
void multiply(float a, float b);


int main()
{
	int x, y;
	float a, b;
	cout<<"Enter two integers = "<<endl;
	cin>>x>>y;
	
	cout<<"Enter two floats = "<<endl;
	cin>>a>>b;
	
	multiply(x,y);
	multiply(a,b);
	
	return 0;
	
}

void multiply(int x, int y)
{
	int z=x*y;
	
	cout<<"Multiplication of integers is : "<<z<<endl;
}

void multiply(float a, float b)
{
	float z=a*b;
	
	cout<<"Mulitplication of floats is : "<<z<<endl;
}


