


// CPP Program 
// Inputs an Integer from the User and Prints Sum of all numbers, till that integer



#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,sum=0;
	
	cout<<"Enter a number = ";
	cin>>x;
	
	for(y=1;y<=x;y++)
	{
		sum=sum+y;
	}
	
	cout<<"Sum is = "<<sum;
}
