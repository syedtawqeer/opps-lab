/* Refer to the CIRCAREA program in Chapter 2, �C++ Programming Basics.� Write a function

  called circarea() that finds the area of a circle in a similar way. It should take an argument of type float
  and return an argument of the same type. Write a main() function that gets a radius value from the
  user, calls circarea(), and displays the result.					*/
  
#include <iostream>
#include<conio.h>
using namespace std ;
double circarea(double radius) ;


main()
{
	double  radius     ;
	cout<< "radius of circle "<<endl;
	cin>> radius ;
	cout<< circarea(radius)   	;
	
	
}


double circarea(double radius) 
{
	double areaofcircle ;
	areaofcircle=3.14*(radius*radius) ;
	return areaofcircle ;
	
	
}







