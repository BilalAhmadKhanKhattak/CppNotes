


// CPP Program 
// Swapping Two Numbers using Extra variable.


#include<bits/stdc++.h>

using namespace std;

int main()

{
	
	int x,y,k;
	
	cout<<"Enter two numbers : "<<endl;
	cin>>x>>y;
	
	cout<<endl<<x<<endl<<y<<endl<<endl;
	
	k=x;
	x=y;
	y=k;
	
	cout<<x<<endl<<y;
	
	return 0;
}
