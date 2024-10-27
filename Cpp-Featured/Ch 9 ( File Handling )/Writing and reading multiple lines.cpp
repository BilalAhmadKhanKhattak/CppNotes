

// CPP Program
// Demosntration of Writing and Reading Multiple Lines.
// Multiple Line Stream.

#include<bits/stdc++.h>

using namespace std;

int main()
{
	char name[20], sal[20], dept[20];
	
	
	ofstream write;
	write.open("Employees.txt");
	
	write<<"Name \t Salary \t Department"<<endl;
	write<<"Hashim \t 12000 \t Sales"<<endl;
	write<<"Amara \t 15000 \t HR"<<endl;
	write<<"Athar \t 13000 \t IT"<<endl;
	write<<"Afzal \t 11500 \t Marketing"<<endl;
	
	write.close();
	
	ifstream read;
	read.open("Employees.txt");
	
	if(read.is_open())
	{
		while(!read.eof())
		{
			read>>name>>sal>>dept;
			cout<<name<<"\t"<<sal<<"\t"<<dept<<endl;
		}
	}
	
	else
	{
		cout<<"File couldn't be opened";
	}
	
	
	read.close();
	
	return 0;
	
}
