

// CPP program
// Demonstrating the Static Variable 
// The Static Variable retains it's value Throughout the program


#include<bits/stdc++.h>

using namespace std;

void demo();

int main()
{
	int i=0;
	
	while(i<3)
	{
		demo();
		i++;
	}
}

void demo()
{
	auto int var1=0;     //Automatic local variable
	static int var2=0;   //static local variable
	
	cout<<"Automatic variable = "<<var1<<" , "<<"Static variable = "<<var2<<endl;
	
	++var1;
	++var2;
}
