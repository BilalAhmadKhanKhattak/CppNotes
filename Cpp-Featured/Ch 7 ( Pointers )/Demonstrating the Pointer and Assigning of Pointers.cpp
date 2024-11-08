


// CPP Program 
// Dmonstrating the Address and the Assigning of Address of a Pointer to another Data type.

#include<bits/stdc++.h>

using namespace std;

int main()
{
	float f=2.34543;
	
	void *fpointer=&f;    // Assigning the address of float " f " to the f pointer.
	
	cout<<"The value of f is: "<<f<<endl;
	cout<<"The address of f is: "<<&f<<endl;
	cout<<"The value of fpointer is: "<<fpointer<<endl;
	
	return 0;
}
