#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r, R;
    double S;

    cout << "Внутрішній радіус: ";
    cin >> r;
    cout << "Зовнішній радіус: ";
    cin >> R;

    S = M_PI * (pow(R, 2) - pow(r, 2));

    cout << endl << "Площа кільця: " << S;

    return 0;
}