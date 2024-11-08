

// CPP program
// Reading 5 Integers from the User
// Printing Total and Avg of those Integers.


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i, num[5], total=0;
	float avg;
	
	cout<<"Enter five integers: "<<endl;
	
	for(i=0;i<5;i++)
	{
		cin>>num[i];
	}
	
	for(i=0;i<5;i++)
	{
		total=total+num[i];
	}
	
	avg=total/5;
	
	cout<<"The total is: "<<total<<endl;
	cout<<"The avg is: "<<avg<<endl;
	
	return 0;
}
