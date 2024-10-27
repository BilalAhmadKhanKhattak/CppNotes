

// CPP Program
// Demosntrating the Use of cin.get() Functions.
// cin.get() Fucntion is used when Needed to Read the Character String.

#include<bits/stdc++.h>

using namespace std;

int main ()
{
	char str[50];
	
	cout<<"Enter a string:"<<endl;
	
	cin.get(str,50);						//cin.get(string name , string size)  //Syntax//
	
	cout<<"You entered : "<<str<<endl;
	
	return 0;
}
