#include <iostream>
using namespace std;
int main()
{
    string name;
    float price, all;
    int quantity;
    cout<<"Введіть назву вашого товару:\n";
    cin>>name;
    cout<<"Введіть ціну на ваш товар:\n";
    cin>>price;
    cout<<"Введіть кількість товару, який ви придбали:\n";
    cin>>quantity;
    all = quantity * price;
    cout<<"Ви придбали товару на суму:\n" << all;
    cout<<"\n----Чек----\n";
    cout<<"Товар\tЦіна\tК-сть\tСума\n";
    cout<<name<<"\t"
    <<price<<"\t"
    <<quantity<<"\t"
    <<all<<"\t";
    return 0;
}