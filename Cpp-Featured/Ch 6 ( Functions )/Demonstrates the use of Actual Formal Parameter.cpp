

// CPP program that prints the sum using the function
// Demonstrating the use of Actual Parameter.


#include<bits/stdc++.h>

using namespace std;

int total_bill(int, int, int);				// Formal Parameter

int main()
{
	int bill;
	int candy=125, toys=300, cups=100;
	
	bill=total_bill(candy, toys, cups);
	
	cout<<"The total bill is = "<<bill;
	
	return 0;
}

int total_bill(int item1, int item2, int item3)
{
	return(item1+item2+item3);
}
