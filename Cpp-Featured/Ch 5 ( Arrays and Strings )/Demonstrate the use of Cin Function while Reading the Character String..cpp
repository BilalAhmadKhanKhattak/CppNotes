

// CPP program 
// Demonstrate Using the cin Function to Read the Character String.
// Which is Wrong


#include<bits/stdc++.h>

using namespace std;

int main ()
{
	char str[50];
	
	cout<<"Enter a string:"<<endl;
	
	cin>>str;				// Cin Function only reads the data which is between spaces, IT WILL ONLY READ TILL THE SPACES COME
	
	cout<<"You entered : "<<str<<endl;
	
	return 0;
}
