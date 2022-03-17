#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double y, x, p;
    double m = 7.4, b = 1.75;

    x = atan(pow(b, 2) + sqrt(b + m));
    p = pow(cos(exp(abs(b - x)) - log(abs(x - b))), 2);
    y = cbrt((pow(sin(m * p - M_PI), 2)) / (b * x + p));

    cout << "y = " << y << endl << "x = " << x << endl << "p = " << p;

    return 0;
}
