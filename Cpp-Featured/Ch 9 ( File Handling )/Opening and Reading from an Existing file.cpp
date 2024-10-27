

// CPP program 
// Opening a File and Reading Data from it.

#include<bits/stdc++.h>

using namespace std;

int main()
{
	char input[50];
	
	ifstream myfile;
	myfile.open("test.txt");
	
	myfile.get(input,50);
	
	cout<<input;
	
	return 0;
}
