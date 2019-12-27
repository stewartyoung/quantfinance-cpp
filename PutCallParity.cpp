#include <iostream>
#include <cmath>
using namespace std; 

int putCallPrice (double underlyingPrice, double maturityTime, double strikePrice , double riskFreeRate, double optionPrice, string optionType )
{
    double parityPrice, discountedStrike;
    string parityType;
    discountedStrike = exp(- riskFreeRate * maturityTime);
    // if the option type is a put
    if (optionType.compare("p") == 0)
    {
        parityType = "call";
        parityPrice = optionPrice + underlyingPrice - strikePrice * discountedStrike;
    }
    // if the option type is a call
    if (optionType.compare("c") == 0)
    {
        parityType = "put";
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
    parityPrice = putCallPrice(10.4, 5.0, 10.0, 2.0, optionPrice, optionType);
    printf ("The parity price of the opposite option is %f", parityPrice);
    return 0;
}


