#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float r, l;
    cout<<"Введіть радіус вашого кола:\n";
    cin>>r;
    l = 2 / M_PI * r;
    cout<<"Довжина вашого кола дорівнює:\n" << l << endl;
    return 0;
}