

// CPP program 
// Calculates the average of two intergers 
// Using the Class, Object and Functions.

#include<bits/stdc++.h>

using namespace std;


class average
{
	private:
		int x;
		int y;
	
	public:
		
		
		average()			// Constructor
		{
			int x=0;
			int y=0;
		}
		
		int getsdata()				// Function that gets the data from the user
		{
			cout<<"Enter two integers : ";
			cin>>x>>y;
		}
		
		int displayaverage()			// Function calculating and Displaying the Average
		{
			int avg;
			
			avg=(x+y)/2;
			
			cout<<"The average is = "<<avg;
		}
		
		//~average ();     // Destructor, it clears all the data of the class when executed, it automatically does it job.
		
};





int main()
{
	average D; 					// Object " D " of the Class " Average "
	
	D.getsdata();				// Invoking the Function
	
	D.displayaverage();			// Invoking the Function
	

	

	return 0;
}
