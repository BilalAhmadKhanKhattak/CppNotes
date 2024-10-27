

// CPP Program
// Reads 12 Integers in an Array
// Prints the Largest.


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int r, c, max, a[3][4], i=0;
	
	cout<<"Enter 12 integers: "<<endl;

	for(r=0;r<3;r++)				// Improvised
	{
		for(c=0;c<4;c++)
		{
			++i;
			cout<<i<<"==";
			cin>>a[r][c];
		}
	}
	
	max=a[0][0];          //suppose and see the magic
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
	
	cout<<"The largest is: "<<max;
	
	return 0;
	
	
}
