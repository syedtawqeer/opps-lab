
#include <iostream>


using namespace std;


int main()
{
    double n;
    cout<<"\nEnter Richter Scale Number (n): ";
    cin>>n;
    if (n<5.0)
        cout<<"\nLittle or no damage";
    else if (n>=5.0 && n<5.5)
        cout<<"\nSome damage";
    else if (n>=5.5 && n<6.5)
        cout<<"\nSome damage; walls may crack or fall ";
    else if (n>=6.5 && n<7.5)
        cout<<"\nDisaster: houses and buildings may collapse ";
    else if (n>7.5)
        cout<<"\nCatastrophe:  Most buildings destroyed ";


    return 0;
}

