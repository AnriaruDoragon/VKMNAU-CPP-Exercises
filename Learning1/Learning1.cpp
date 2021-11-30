#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, x, y;
    bool A, B, C;

    cout << "A value: ";
    cin >> a;
    cout << endl << "X value: ";
    cin >> x;

    y = ((a - 2) / (a + 1)) + ((a + 1) / (a - 1)) - (1 / (1 + a));
    cout << endl << "Y = " << y << endl;

    a = ((15 * x - 45 * y) / (x - 3 * y)) + ((5 * pow(x, 2) + 15 * x) / x + 3) + ((x - y) / (x + y));
    cout << "A = " << a << endl;

    cout << endl << "Логічні вирази" << endl;

    A = x >= a + 2 * y;
    cout << "A) " << A << endl;

    B = -10 < x <= 10 * a;
    cout << "B) " << B << endl;

    C = (-100 <= x < 0) || (10 < x <= 100);
    cout << "C) " << C << endl;

    return 0;
}

