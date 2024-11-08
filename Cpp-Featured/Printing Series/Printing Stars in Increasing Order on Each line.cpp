

// CPP Program 
// Printing Stars in Increasing Order on Each Line.


#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int i, j;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";  //cout<<j; To print series of numbers
		}		
		cout<<endl;
	}
}
