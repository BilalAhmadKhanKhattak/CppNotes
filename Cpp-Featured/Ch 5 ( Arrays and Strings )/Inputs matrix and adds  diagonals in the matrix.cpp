


// CPP Program 
// Inputs a Matrix of 4*4 from the User and Prints the Sum of the Diagonals.


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int arr[4][4], r, c, sum=0;
	
	cout<<"Enter an array of 4 rows and 4 columns (16 integers )"<<endl;
	
	for(r=0;r<4;r++)   //Nested for loop to get input data from the user
	{
		for(c=0;c<4;c++)
		{
			cin>>arr[r][c];
		}
	}
	
	for(r=0;r<4;r++)			//Nested for loop to print the matrix
	{
		cout<<endl;
		for(c=0;c<4;c++)
		{
			cout<<setw(20)<<arr[r][c];
		}
		
		//cout<<endl;
	}
	
	for(r=0;r<4;r++)			//Nested for loop to add the diagonals of the matrix
	{
		for(c=r;c<=r;c++)
		{
			sum=arr[r][c]+sum;
		}
	}
	
	cout<<endl<<endl<<"Sum of diagonals is = "<<sum;

	return 0;
	
}
