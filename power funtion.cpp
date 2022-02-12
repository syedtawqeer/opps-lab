#include <iostream>
#include <math.h>
using namespace std ;

double power (int p, double n );
main()
{
  int p=2 , opt 	;
  double n   	;
  cout <<"enter a no "<< endl ;
  cin >> n;
  
cout << "press 1 for  entering  value of power and  press 2 for  squaring( and defualt is also squre ) "<<endl;
cin>>opt;

if (opt==1)
{
	
	cout<< "enter the value for power"<<endl ;
	cin >>p ;
	cout << power( p,n);
	
}
else 
{cout << power (p,n);
}
}

double power (int p ,double n)
{
	double ans ;
	ans =pow( n , p );
	return ans ;
}
