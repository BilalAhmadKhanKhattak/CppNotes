

// CPP Program 
// Overloading Functions with Different Number of Parameters 



#include<bits/stdc++.h>

using namespace std;

int addition(int x, int y);
int addition(int x, int y, int z);

int main()
{
	int x, y, z, sum2, sum3;
	
	cout<<"Enter three integers : "<<endl;
	cin>>x>>y>>z;
	
	cout<<"Sum of first two integers = "<<addition(x,y)<<endl;
	cout<<"Sum of three integers is = "<<addition(x,y,z);
	
	return 0;
}

int addition(int x, int y)
{
	return(x+y);
}

int addition(int x, int y, int z)
{
	return(x+y+z);
}
