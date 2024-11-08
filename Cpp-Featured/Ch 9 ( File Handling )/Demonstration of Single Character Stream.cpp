

// CPP Program 
// Demonstration of Single Character Stream 


#include<bits/stdc++.h>

using namespace std;

int main()
{
	char ch;
	
	ifstream read;
	read.open("Single Character Stream.txt");
	
	while(!read.eof())
	{
		read>>ch;
		cout<<ch<<endl;
	}
	
	read.close();
	
	return 0;
}
