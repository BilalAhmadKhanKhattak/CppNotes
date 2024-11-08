

// CPP program that 
// Reads 12 integers in a 2d Array
// Prints largest Integer using the For Loop.


#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int i, j, m[3][4], max=0;
	
	cout<<"Enter 12 integers separated by space : "<<endl;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>m[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(m[i][j]>max)
			{
				max=m[i][j];
			}
		}
	}
	
	cout<<"The largest nummber you entered is : "<<max;
	
	return 0;
}
