

// CPP Program
// Passing Arguments by Variables


  #include<bits/stdc++.h>
  
  using namespace std;
  
  int sum(int x, int y);
  
  int main()
  {
  	int x, y, z;
  	
  	cout<<"Enter two number = ";
  	cin>>x>>y;
  	
  	z=sum(x, y);						//Function call
  	
  	cout<<"The sum is = "<<z;
  	
  	return 0;
  }
  
  int sum(int x, int y)
  {
  	return(x+y);
  }
