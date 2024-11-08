

// CPP Program
// Demonstrating the use of strcpy() Function.


#include<bits/stdc++.h>

using namespace std;

int main ()
{
	char str[10], city[10], demo[50];
	
	cout<<"Enter a city name : "<<endl;
	cin.get(city,10);
	
	strcpy(str,city);											//copying city name to the "str"
	
	strcpy(demo,"Copy or write to a string like this");			//another method, copying something to a string way.
	
	cout<<"City you entered: "<<city<<endl;
	cout<<"City name copied to the str: "<<str<<endl;
	cout<<"The demo string: "<<demo<<endl;
	
	return 0;
}
