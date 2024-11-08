

// CPP Program 
// Demonstrating the use of strcmp() function.


//strcmp() function compares two strings and returns an integer value based on the result of comparison
//returns 0 if bothe strings are same
//returns 1 if the first string is greater than the second
//returns -1 if the first string is less than the second


#include<bits/stdc++.h>

using namespace std;

int main ()
{
	char str1[10]="Mango", str2[10]="Mango", str3[10]="Potato", str4[10]="Orange";		// Initializing the strings.
	int x,y,z;
	
	x=strcmp(str1,str2);
	
	cout<<"str1 and str2 are both equal, x = "<<x<<endl<<endl;
	
	y=strcmp(str3,str1);
	cout<<"str3 is greater than str1, y = "<<y<<endl<<endl;
	
	z=strcmp(str1,str4);
	cout<<"str1 is less than str4, z = "<<z<<endl<<endl;
	
	return 0;
	
}
