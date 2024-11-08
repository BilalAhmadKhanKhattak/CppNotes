

// CPP Prorgam 
// Reads a 2d Array of 3 Rows and 4 Columns, and Prints the Largest Number


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[3][4],r,c,max=0;
	
	cout<<"Enter 12 integers to input in a matrix of 3 rows and 4 columns (12 integers) : "<<endl;
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			cin>>a[r][c];
		}
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			if(a[r][c]>max)
			{
				max=a[r][c];
			}
		}
	}
	
	cout<<endl<<"The largest number you entered is : "<<max;
	
	return 0;
}
