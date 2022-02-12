/***3. Write a function called zeroSmaller() that is passed two int arguments by reference
and then sets the smaller of the two numbers to 0. Write a main() program to exercise
this function.*/


#include <iostream>
using namespace std ;
int zeroSmaller(int&c ,int&d);
main()
{
	int c , d ,k ;
	  
	  cout << "enter  frist value "<< endl ;
	  cin>>c;
	  
	  cout<< "enter second value "<< endl ;
	  cin >>d;
	 
 zeroSmaller(c,d) ;	
  cout << "c = " << c << " d = " << d << endl;  
  
}

int zeroSmaller(int&a, int&b    )

{
	if (a<b)
	{	 
		a=0;
		
	}
	else {
		b=0;
	}
	
}
