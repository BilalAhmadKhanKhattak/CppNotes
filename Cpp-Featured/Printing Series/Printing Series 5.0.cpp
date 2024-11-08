

// CPP Program
// Prints series of given number 
// 1+1 / 2+2 / 4+3 / 6+4 / 8+5 / 10+6 / 12+7 / 14+8 / 16+9 / 18+10 / 20

#include<bits/stdc++.h>

using namespace std;

int main ()
{
	
	int i, j=0;
	
	cout<<"1";
	
	for(i=1;i<=10;i++)
		{
			j=j+2;
			cout<<"+"<<i<<" / "<<j;
		}
}
