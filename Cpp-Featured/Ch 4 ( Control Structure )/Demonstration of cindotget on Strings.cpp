

// CPP Program 
// Demonstrating the cin.get()
// cin.get(initialized char variable , size of variable) ; method to input character from the user

#include<bits/stdc++.h>

using namespace std;

int main()
{
	char name[50];
	
	cout<<"Enter you full name please : "<<endl;
	cin.get(name,50);				
	
	cout<<"You enetered : "<<name;
}
