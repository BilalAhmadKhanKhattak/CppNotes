

// CPP program that 
// Demonstrate the use of strcat() function.


#include<bits/stdc++.h>

using namespace std;

int main()
{
	char str1[50], str2[50], fname[50], lname[50];
	
	strcpy(str1,"Home");				//copying / declaring / initalizing
	strcpy(str2,"Work");				//copying / declaring / initializing
	
	//The strcat() function is used for the concatenation or joining two strings
	
	strcat(str1,str2);				// strcat( adding into this , this is being added to the first)  //Syntax//
	
	cout<<"String 1 = "<<str1<<endl<<endl;
	
	cout<<"Enter your first name : "<<endl;
	cin>>fname;
	
	cout<<"Enter your last name : "<<endl;
	cin>>lname;
	
	strcat(fname,lname);
	
	cout<<"Your full name is = "<<fname;
	
	return 0;
	
	
}
