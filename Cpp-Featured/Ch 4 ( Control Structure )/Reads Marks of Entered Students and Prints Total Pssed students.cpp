

// CPP program
// Reads the Marks of Entered Number of Students.
// Prints the Total Number of Passed students 


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i, n, pass=0, marks[50
	];
	
	cout<<"Enter the number of students: "<<endl;
	cin>>n;
	
	cout<<"Enter the marks of each students (0-100): "<<endl;
	
	for(i=0;i<n;i++)
	{
		cin>>marks[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(marks[i]>33)
		{
			pass++;
		}
		
	}
	
	cout<<"the total number of students passed are: "<<pass;
	
	return 0;
	
	
}
