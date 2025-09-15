#include<iostream>
using namespace std;
int main()
{
    int n;    
    cout<<"Введіть номер транспорту: ";
    cin>>n;
    switch (n)
    {
    case 1: cout<<"Автомобіль"; break;
    case 2: cout<<"Автобус"; break;
    case 3: cout<<"Поїзд"; break;
    case 4: cout<<"Літак"; break;
    }
return 0;
}