#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    double x,y, exp=2.71828;    
    cout<<"Введіть значення x: ";
    cin>>x;
    if (x>1)
    {
        y=x*pow(exp,x);
        cout<<"y = "<< y <<endl;
    }
    else
    if (x<=1)
    {
        y=sqrt(1-x);
        cout<<"y = "<< y <<endl;
    }
    return 0;
}