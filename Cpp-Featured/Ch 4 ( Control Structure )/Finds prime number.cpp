

// CPP Program
// Tells if the Entered number is Prime or Not.


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, count=0;
	
	cout<<"Enter the number = ";
	cin>>a;
	
	for(b=1;b<=a;b++)
	{
		if(a%b==0)      // Divides each number that is less than that Entered Integer to check if its Prime or Not.
		{
			count++;
		}
	}
	
	if(count==2)
	{
		cout<<"You entered a prime number";
	}
	
	else
	{
		cout<<"The entered number is not a prime number";
	}
}
