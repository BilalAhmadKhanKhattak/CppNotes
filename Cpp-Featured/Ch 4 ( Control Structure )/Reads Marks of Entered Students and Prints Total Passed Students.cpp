

// CPP Program 
// Reads Marks of 10 Students
// Prints Total Passed Students


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int marks[100],k,n,pass=0;
	
	cout<<"Enter number of students in your class"<<endl;
	cin>>n;
	
	cout<<"Enter the marks on each line ( Passing marks 33 ): "<<endl;
	for(k=0;k<n;k++)
	{
		cin>>marks[k];
	}
	
	cout<<endl;
	cout<<"The marks you entered are : "<<endl;
	for(k=0;k<n;k++)
	{
		cout<<marks[k]<<endl;
	}
	
	for(k=0;k<n;k++)
	{
		if(marks[k]>=33)
		{
			pass++;
		}
	}
	
	cout<<"The number of students the are pass are : "<<pass;
	
	return 0;
}
