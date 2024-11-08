

// CPP Program 
// Reads 5 Integers in an Array and Prints Total Using the For loop
// And prints the average 


#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int a[5], c=0, total=0;
	float avg=0;
	
	cout<<"Enter 5 integers seperated by space"<<endl;
	
	for(c=1;c<=5;c++)
	{
		cin>>a[c];
	}
	
	for(c=1;c<=5;c++)
	{
		total=total+a[c];
	}
	
	avg=total/5;
	
	cout<<"The total is: "<<total<<endl;
	cout<<"The average is: "<<avg;
	
	return 0;
}
