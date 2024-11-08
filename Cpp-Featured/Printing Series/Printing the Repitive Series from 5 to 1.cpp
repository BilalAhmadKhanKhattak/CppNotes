

// CPP program
// Printing series

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x,k;
	
	for(x=5;x>=1;x--)
	{
		//cout<<endl;
		for(k=5;k>=x;k--)
		{
			cout<<k;
		}
		cout<<endl;
	}
	return 0;
}
