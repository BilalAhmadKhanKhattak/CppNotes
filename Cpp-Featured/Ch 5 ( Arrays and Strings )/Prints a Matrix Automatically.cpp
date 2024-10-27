

// CPP Program
// Prints a Matrix Automatically


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int r, c, i=0, a[3][4];
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			a[r][c]=++i;
		}
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			cout<<2*a[r][c]<<"\t";
		}
	
		cout<<endl;
	}
	
	
	return 0;
}
