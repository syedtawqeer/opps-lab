#include <iostream>
using namespace std;
	main()
{
    double weight,height,bmi=0;
    cout <<"Please Enter the body wight in Pounds and height in INCHES\n"<<endl;
    cin >>weight>>height;
    bmi = ((703 * weight) / (height * height));
    if (bmi<=18.5)
    {cout << "underweight"<<endl;
	}
else 	if (bmi>=18.5 && bmi<24.9)
	{cout<<"mormal"<<endl;
	}
	else if (bmi>=25.0 && bmi<=29.9 )
	{cout<< "overwieght"<<endl;
	}
else if (bmi>30)
	{
		cout<< "obese"<<endl;
		
	}
}
