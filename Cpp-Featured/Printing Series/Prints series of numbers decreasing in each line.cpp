

// CPP Program 
// Printing Series of Number in below order.

//	1234567
//	123456
//	12345
//	1234
//	123
//	12
//	1

#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int i, j;
	
	for(i=7;i>=1;i--)			// Nested for loop to print the series of number
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		
	cout<<endl;
	
	}
}
