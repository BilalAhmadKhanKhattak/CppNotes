

// CPP Program 
// Prints a 2d array of Integers Starting from Zero and Increementing by 2 Everytime till 24.

#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int i, j, count=1, matrix[3][4];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			
			matrix[i][j]=count;		
		    count++; 				
			
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<setw(5)<<matrix[i][j]*2;
		}
		
		cout<<endl;
	}
	
	return 0;
}
