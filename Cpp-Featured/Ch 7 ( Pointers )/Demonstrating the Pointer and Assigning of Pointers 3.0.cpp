


// CPP Program
// Demonstrating the Use of " Pointers "

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x=500;
	int *xpointer;
	xpointer=&x;
	
	int n;
	n=*xpointer;     // By using this, the value stored at the address of ( *xpointer) will be assigned to " n "
	
	cout<<"The address of x is: "<<&x<<endl;
	cout<<"The value of x is: "<<x<<endl;
	cout<<"The value of xpointer is: "<<xpointer<<endl;
	cout<<"The value of n is: "<<n;
	
	return 0;
}
