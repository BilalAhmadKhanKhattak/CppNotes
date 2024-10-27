

// FUNCTION OVERLOADING
// Function overloading is :
// When we use the Same Name for Two or More Functions but with Different Parameters.

// CPP programdemonstrates the use of fucntion overloading.


#include<bits/stdc++.h>

using namespace std;

int multiply(int a, int b);
float multiply(float a, float b);

int main ()
{
	int x, y, z;
	
	cout<<"The output of integers = "<<multiply(12,13)<<endl;
	
	cout<<"The output of floats = "<<multiply(1.5f,2.5f);		// 'f' suffix indicates these are float Literals // Otherwise CPP takes them as double. 
	return 0;
}

int multiply(int a, int b)
{
	return(a*b);
}

float multiply(float a, float b)
{
	return(a*b);
}
