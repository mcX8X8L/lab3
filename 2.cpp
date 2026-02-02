#include <iostream>
using namespace std;
int main()
{
    float a, b;
    float ave; // average
    cout<<"Введіть перше дійсне число:\n";
    cin>>a;
    cout<<"Введіть друге дійсне число:\n";
    cin>>b;
    ave = (a + b)/2;
    cout<<"Cередній бал ваших чисел:\n" << ave << endl;
    return 0;
}