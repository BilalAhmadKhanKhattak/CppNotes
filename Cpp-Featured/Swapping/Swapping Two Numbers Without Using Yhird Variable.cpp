


// CPP Program 
// Swapping two Numbers using Third Variable


#include<bits/stdc++.h>

using namespace std;

int main ()

{
	int a, b;
	
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	
	cout<<"Before swapping, numbers are "<<"a = "<<a<<setw(10)<<"b = "<<b<<endl<<endl;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"After swapping, numbers are "<<"a = "<<a<<setw(10)<<"b = "<<b;
	
	
}
