

// CPP Program 
// Prints series of numbers as the below order.

//	10
//	109
//	1098
//	10987
//	109876
//	1098765
//	10987654
//	109876543
//	1098765432
//	10987654321


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i, j;
	
	for(i=10;i>=1;i--)
	{
		for(j=10;j>=i;j--)
		{
			cout<<j;
		}
	cout<<endl;
	}
}
