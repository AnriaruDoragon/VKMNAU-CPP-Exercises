#include <iostream>
using namespace std;

int main()
{
    double adultPrice, childPrice, totalPrice;
    int adultTikets, childTikets;

    adultPrice = 138.5;
    childPrice = 96.95;

    adultTikets = 5;
    childTikets = 3;

    totalPrice = (adultTikets * adultPrice) + (childTikets * childPrice);

    cout << "До сплати: " << int(totalPrice) << " грн. " << (totalPrice - int(totalPrice)) * 100 << " коп." << endl << "Щасливої дороги!";

    return 0;
}