

// CPP program that 
// Reads Names of the three Students
// Reads Marks of the Students
// Prints Marksheet of the Students


//#include<iostream>
//#include<conio.h>
//#include<stdio.h>
//#include<iomanip>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,marks;
	char aa[20], ab[20], ac[20], ad, ae, af, ag, ah;
	
	cout<<"Enter the name of your first student:"<<endl;
	cin>>aa;
	
	cout<<"\nEnter the name of your second student:"<<endl;
	cin>>ab;
	
	cout<<"\nEnter the name of your third student:"<<endl;
	cin>>ac;
	
		
	cout<<"\nEnter the marks in COMP, MATHS, PHY of "<<aa<<endl<<endl;
	cin>>a>>b>>c;
	
	cout<<"\nEnter the marks in COMP, MATHS, PHY of "<<ab<<endl<<endl;
	cin>>d>>e>>f;
	
	cout<<"\nEnter the marks in COMP, MATHS, PHY of "<<ac<<endl<<endl;
	cin>>g>>h>>i;
	
	cout<<"\t\t\tMARKS SHEET OF CLASS ICS-II(b)"<<endl<<endl<<endl;
	
	cout<<"\tNAMES"<<setw(20)<<"COMP"<<setw(15)<<"REMARKS"<<setw(20)<<"MATHS"<<setw(15)<<"REMARKS"<<setw(20)<<"PHY"<<setw(15)<<"REMARKS"<<endl<<endl;
	
	cout<<"\t"<<aa<<setw(20)<<a<<setw(15)<<"REMARKS"<<setw(20)<<b<<setw(15)<<"REMARKS"<<setw(20)<<c<<setw(15)<<"REMARKS"<<endl;
	
	cout<<"\t"<<ab<<setw(20)<<d<<setw(15)<<"REMARKS"<<setw(20)<<e<<setw(15)<<"REMARKS"<<setw(20)<<f<<setw(15)<<"REMARKS"<<endl;
	
	cout<<"\t"<<ac<<setw(20)<<g<<setw(15)<<"REMARKS"<<setw(20)<<h<<setw(15)<<"REMARKS"<<setw(20)<<i<<setw(15)<<"REMARKS"<<endl;

	
	//j=a+b+c;
	//k=d+e+f;
	//l=g+h+i;
	
	
	// CHATGPT written onwards
	
	// Calculate total marks and print remarks for each student
    int total1 = a + b + c;
    int total2 = d + e + f;
    int total3 = g + h + i;

    cout << endl << endl << "Total Marks for " << aa << ": " << total1 << " - ";
    if (total1 >= 80) cout << "You passed with grade 'A'";
    else if (total1 >= 70) cout << "You passed with grade 'B'";
    else if (total1 >= 60) cout << "You passed with grade 'C'";
    else if (total1 >= 50) cout << "You are fail, sorry";
    else cout << "You are ridiculously fail";
    cout << endl << endl;

    cout << "Total Marks for " << ab << ": " << total2 << " - ";
    if (total2 >= 80) cout << "You passed with grade 'A'";
    else if (total2 >= 70) cout << "You passed with grade 'B'";
    else if (total2 >= 60) cout << "You passed with grade 'C'";
    else if (total2 >= 50) cout << "You are fail, sorry";
    else cout << "You are ridiculously fail";
    cout << endl << endl;

    cout << "Total Marks for " << ac << ": " << total3 << " - ";
    if (total3 >= 80) cout << "You passed with grade 'A'";
    else if (total3 >= 70) cout << "You passed with grade 'B'";
    else if (total3 >= 60) cout << "You passed with grade 'C'";
    else if (total3 >= 50) cout << "You are fail, sorry";
    else cout << "You are ridiculously fail";
    cout << endl << endl;

    return 0;
	
	
};



