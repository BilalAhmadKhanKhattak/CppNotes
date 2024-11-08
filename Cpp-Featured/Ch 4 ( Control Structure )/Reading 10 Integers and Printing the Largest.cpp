

// CPP program
// Reads Ten Integers from the user
// Prints the Largest Integer.

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i, num[10], max;
	
	cout<<"Enter ten integers: "<<endl;
	
	for(i=0;i<10;i++)
	{
		cin>>num[i];
	}
	
	max=num[0];
	
	for(i=0;i<10;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	
	cout<<"The largest number is: "<<max;
	
	return 0;
}
