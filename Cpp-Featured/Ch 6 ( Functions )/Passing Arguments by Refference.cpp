

// CPP Program
// Passing Arguments by Reference 


#include<bits/stdc++.h>

using namespace std;

void doubled(int &x, int &y, int &z);  //Using reffrence operator "&"

int main ()
{
	int x, y, z;
	
	cout<<"Enter three numbers = "<<endl;
	cin>>x>>y>>z;
	
	cout<<"The values before calling the function"<<endl;
	cout<<"x="<<x<<setw(5)<<"y="<<y<<setw(5)<<"z="<<z<<endl<<endl;
	
	doubled(x,y,z);
	
	cout<<"The values after calling the function"<<endl;
	cout<<"x="<<x<<setw(5)<<"y="<<y<<setw(5)<<"z="<<z<<endl;
}

void doubled(int &x, int &y, int &z)
{
	x=x*2;
	y=y*2;
	z=z*2;
}
