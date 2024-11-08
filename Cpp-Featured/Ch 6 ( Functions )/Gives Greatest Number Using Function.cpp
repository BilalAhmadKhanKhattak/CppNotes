

// CPP Program 
// Finding the Greatest Number between the Entered Integers.
// Using the Function
// 1.0


#include<bits/stdc++.h>

using namespace std;


int greatest(int a, int b, int c)
{
	int x=a, y=b, z=c;
	
	if (x>y&&x>z)
	{
		return x;
	}
	
	else if (y>x&&y>z)
	{
		return y;
	}
	
	else
	{
		return z;
	}
}

int main ()
{
	int x, y, z, max;
	
	cout<<"Enter three integers: "<<endl;
	cin>>x>>y>>z;
	
	
	
		max= greatest(x,y,z);
		cout<<"The greatest number is: "<<max;
	
	
	return 0;
	
	
}
