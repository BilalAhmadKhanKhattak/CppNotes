

// CPP Program 
// Calculating the Sum of the Initialized Arrays.


#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int i, j, sum[2][4] ,total=0;
	
	int a[2][4]= {{14,8,11,10},{15,12,20,3}} , b[2][4]={{2,3,4,7},{6,7,8,9}};		// Initializing the Array
	
	for(i=0;i<2;i++)			// Nested for loop Summ the Arrays
	{
		
		for(j=0;j<4;j++)
		{
			
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	
	
	for(i=0;i<2;i++)			// Nested For loop to print the sum of 2 arrays.
	{
		
		for(j=0;j<4;j++)
		{
			
			cout<<setw(10)<<sum[i][j];		//setw() means set width,  spacing in between between 
		}
		
		cout<<endl;
	}
	
	return 0;
}
