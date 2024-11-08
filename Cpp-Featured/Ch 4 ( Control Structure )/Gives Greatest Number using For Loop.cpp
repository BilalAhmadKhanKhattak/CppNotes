

// CPP Program
// Reads 10 Integers from the User and Prints the largest Integer.


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[10],k,max=0;
	
	cout<<"Enter 10 integers seperately = ";
	for(k=0;k<10;k++)
	{
		cin>>a[k];
	}
	
	for(k=0;k<10;k++)
	{
		if(a[k]>max)
		{
			max=a[k];
		}
	}
	
	cout<<"The largest number you entered is : "<<max;
	
	return 0;
}
