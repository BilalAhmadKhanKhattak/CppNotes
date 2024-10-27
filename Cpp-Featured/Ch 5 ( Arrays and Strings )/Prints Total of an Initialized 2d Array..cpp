

// CPP Program
// Prints Total of the Initialized 2d array


#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int x[3][4]=
	{
		{30, 20, 55, 206},
		{78, 81, 25, 90},
		{3, 48, 67, 104}
	};
	
	int c, k, total=0;
	
	for(c=0;c<3;c++)
	{
		for(k=0;k<4;k++)
		{
			total=total+x[c][k];
		}
	}
	
	cout<<"The total is : "<<total;
	
	return 0;
}
