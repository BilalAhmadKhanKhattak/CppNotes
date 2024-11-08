

// CPP Program 
// Calcultion of Total Charges for an Indoor-patient and Outdoor-pateint by Overloading Function

// It's not the same program, It is same but executed usng " FUNCTION OVERLOADING "

// Function Overloading: Using the same named function but with different Parameters.


#include<bits/stdc++.h>

using namespace std;

float total(float x, float y, float a, float b);   //prototype of functions
float total(float x, float y);                     //prototype of functions

int main()
{
	float check, days, daily, meds, services;
	
	cout<<"Enter 1 for an indoor-patient and 2 for an outdoor-patient"<<endl;
	cin>>check;
	cout<<endl<<endl;
	
	if(check==1)                                                                                              //indoorpatient
	{
		cout<<"Enter the days in hospital"<<endl;
		cin>>days;
		cout<<endl;
		
		cout<<"Enter the daily rates"<<endl;
		cin>>daily;
		cout<<endl;
		
		cout<<"Enter the medication charges"<<endl;
		cin>>meds;
		cout<<endl;
		
		cout<<"Enter the hospital services charges"<<endl;
		cin>>services;
		cout<<endl<<endl;
		
		cout<<"Total charges for the indoor-patient are = "<<total(days,daily,meds,services)<<endl;                 //invoking the function
	}
	
	else                                                                                                         //outdoor-patient
	{
		cout<<"Enter the medication charges"<<endl;
		cin>>meds;
		cout<<endl;
		
		cout<<"Enter the hospital services charges"<<endl;
		cin>>services;
		cout<<endl<<endl;
		
	 	cout<<"Total charges for the outdoor-patient are = "<<total(meds,services)<<endl;                          //invoking the fucntion
	}
	
	/*if(check==1)
	{
		cout<<"Total charges for the indoor-patient are"<<total(days,daily,meds,services)<<endl;
	}
	   //alternative for invoking functions seperately
	else
	{
		cout<<"Total charges for the outdoor-patient are"<<total(meds,services)<<endl;
	}
	*/
	
}
 //function overloading 
 
 
float total(float x, float y, float a, float b)                     //function with 4 parameters (indoor-patient)
{
	float z,sum;
	
	z=x*y;                                                          //calcultaing charges per day
	sum=z+a+b;
	
	return sum;
}

float total(float x, float y)                                       //function with 2 parameters  (outdoor-patient)
{
	float sum;
	
	sum=x+y;
	
	return sum;
}
