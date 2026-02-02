#include <iostream>
using namespace std;
int main()
{
    float cel, far, kel;
    cout<<"Введіть вашу температуру у градусах Цельсія:\n";
    cin>>cel;
    far = (cel * 9/5) + 32;
    kel = cel + 273.15;
    cout<<"Ваша температура у Фаренгейтах та Келвінах дорівнює:\n" << far << endl << kel << endl;
    return 0;
}