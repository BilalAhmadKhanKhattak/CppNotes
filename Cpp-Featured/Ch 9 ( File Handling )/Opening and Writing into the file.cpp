

// CPP program
// Opening a File and Writing into it.

#include<bits/stdc++.h>

using namespace std;

int main()
{
	ofstream myfile;
	myfile.open("test.txt");
	
	myfile<<"File handling programs for the first time"<<endl;
	
	myfile.close();
	
	return 0;
	
}
