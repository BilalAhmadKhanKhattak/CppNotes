

// CPP Program 
// Multiplies the Initialized 2d Array with 2.


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int r,c;
	int a[3][4]=
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			cout<<setw(5)<<a[r][c]*2;
		}
		cout<<endl;
	}
}
