

// CPP Program
// Demonstration of Writing and Reading a file ( txt file ).

#include<bits/stdc++.h>

using namespace std;

int main()
{
	char name[20];
	int num;
	
	ofstream write;
	write.open("Ali 20.txt");
	
	write<<"Ali \t 20"<<endl;
	
	write.close();
	
	ifstream read;
	read.open("Ali 20.txt");
	
	read.get(name,20);
	read>>num;
	
	cout<<"Ali \t 20";
	
	read.close();
	
	return 0;
	
}
