#include <iostream>
using namespace std;

int putCallPrice (int optionPrice, string optionType)
{
    double parityPrice ;
    if (optionType.compare("p") != 0)
    {
        parityPrice = optionPrice * 2;
    }
    if (optionType.compare("f") != 0)
    {
        parityPrice = optionPrice * 2;
    }

    return parityPrice;
}

int main()
{
    string optionType;
    double optionPrice;
    cout << "Please enter the type of option\n Put (p) or Call(c): ";
    cin >> optionType;
    cout << "Please enter option price: ";
    cin >> optionPrice;
    printf("Option Type %s\n", optionType.c_str());
    printf("Option Price %f\n", optionPrice);
    
    double parityPrice;
    parityPrice = putCallPrice(optionPrice, optionType);
    cout << parityPrice;
    return 0;
}


