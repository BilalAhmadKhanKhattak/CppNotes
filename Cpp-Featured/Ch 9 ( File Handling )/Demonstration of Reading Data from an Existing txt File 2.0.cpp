

// CPP program
// Reading the Data from a txt file through programming.

#include<bits/stdc++.h>

using namespace std;

int main ()
{
	
	char name[10];
	char salary[10];
	char depart[10];
	
	ifstream read;
	read.open("test1.txt");
	
	if(!read)
	{
		cout<<"Cant open the file";
		exit(1);
	}
	
	while(!read.eof())
	{
	read>>name>>salary>>depart;
	
	cout<<name<<salary<<depart<<endl;
	
	}
	
	read.close();
	
	
	
	return 0;
}
