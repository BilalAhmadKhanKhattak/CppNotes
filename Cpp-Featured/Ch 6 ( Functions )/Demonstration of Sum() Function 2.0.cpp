

// CPP Program
// Reading Two Integers and Printing Sum using Functions.


#include <bits/stdc++.h>

using namespace std;

int sum(int x,int y)
{
	return(x+y);
}

int main()
{
	int x, y, z;
	
	cout<<"Enter two numbers : "<<endl;
	cin>>x>>y;
	
	z=sum(x,y);
	
	cout<<"The sum of two number is : "<<z;
	
	return 0;
}
