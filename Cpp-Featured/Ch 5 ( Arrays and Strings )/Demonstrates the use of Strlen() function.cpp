

// CPP Program
// Demonstrating the Use of strlen() Function.


#include<bits/stdc++.h>

using namespace std;

int main ()
{
	char str1[50], str2[50], str3[50];
	
	cout<<"Enter your three freinds' name seperated by spaces : "<<endl;
	cin>>str1>>str2>>str3;
	
	//strlen() funtion is used to return the length(the number of characters) of a string
	
	cout<<"The length of "<<str1<<" is = "<<strlen(str1)<<endl;
	cout<<"The length of "<<str2<<" is = "<<strlen(str2)<<endl;
	cout<<"The length of "<<str3<<" is = "<<strlen(str3)<<endl;
	
}
