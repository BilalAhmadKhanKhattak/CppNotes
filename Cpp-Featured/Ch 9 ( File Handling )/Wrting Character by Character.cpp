

// CPP Program
// Demonstration of Writing Character by Character.


#include<bits/stdc++.h>

using namespace std;

int main()
{
	char ch;
	int i;
	
	ofstream writes;
	writes.open("Writing character by ch.txt");
	
	
	cout<<"Enter character : "<<endl;
	
	for(i=0;i<=20;++i)
	{
		
		cin>>ch;
		writes<<ch<<endl;
	}
	
	writes.close();
	
	return 0;
}
