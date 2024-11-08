

// CPP Program 
// Reads the Number of Students in the class
// Reads the Marks of each student respectively 
// Prints Total number of Passed students


#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int n, c, marks[50], pass=0;
	
	cout<<"Enter the numbers of students //max 50 students// :"<<endl;
	cin>>n;
	
	cout<<endl<<"Enter the marks of the students in sequence seperated by space (Passing marks >= 33): "<<endl;
	for(c=0;c<n;c++)
	{
		cin>>marks[c];
		
		if(marks[c]>=33)
		{
			pass++;
		}
	}
	
	cout<<endl<<"Total number of passed students are : "<<pass;
}
