


// CPP Program 
// Demostrate the use of increment/decrement operators.
// Using it as suffix or prefix.


//#include<iostream>
//#include<conio.h>
//#include<stdio.h>
//#include<iomanip>

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c, sum;
	
		
	cout<<"Enter the first value:"<<endl;
	cin>>a;
	
	cout<<"\nEnter the second value:"<<endl;
	cin>>b;
	
	cout<<"\nEnter the third value:"<<endl;
	cin>>c;
	
	cout<<endl;
	
	cout<<setw(20)<<" == BEFORE INC/DEC YOUR VALUES ARE == "<<endl<<endl;
	
	cout<<setw(5)<<"a="<<a<<setw(5)<<"b="<<b<<setw(5)<<"c="<<c<<endl<<endl<<endl;
	
	cout<<"== AFTER INC/DEC YOUR VALUES ARE NOW =="<<endl<<endl;
	
	
	a=b++;
	b=c++;
	c=a--;
	a=--b;
	b=c--;
	c=--a;
	
	
	cout<<setw(5)<<"a="<<a<<setw(5)<<"b="<<b<<setw(5)<<"c="<<c;
	
}
