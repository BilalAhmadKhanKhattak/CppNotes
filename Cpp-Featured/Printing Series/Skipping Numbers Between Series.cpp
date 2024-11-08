


// CPP Program
// Print numbers from 1-30 but skip 21-25

#include<bits/stdc++.h>

using namespace std;

int main ()
{
	
	int k;
	
	for(k=1;k<=30;k++)
		{
			if(k<=20)
				{
					cout<<k<<endl<<endl;
					continue;
				}
			
			else if((k>25)&&(k<=30))
				{
					cout<<k<<endl<<endl;
					continue;
				}
		}
}
