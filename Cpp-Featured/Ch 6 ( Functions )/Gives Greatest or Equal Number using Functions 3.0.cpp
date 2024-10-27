

// CPP Program 
// Finding the Greatest Integer between the Entered Integers.
// Even tells if all the numbers are equal
// Using the Function
// 3.0


#include<bits/stdc++.h>

using namespace std;


int greatest(int a, int b, int c)
{
	int max=a;
	
	if(b>max)
	{
		max=b;
	}
	
	if(c>max)
	{
		max=c;
	}
	
	return max;
	
}

int main ()
{
	
	int x, y, z, max;
	
	cout<<"Enter three integers: "<<endl;
	cin>>x>>y>>z;
	
	if(x==y==z)
	{
		cout<<"The numbers are equal"<<endl;
	}
	
	else
	{
		max= greatest(x,y,z);
	
		cout<<"The greatest number is: "<<max;
	}
	
	
	return 0;
}
