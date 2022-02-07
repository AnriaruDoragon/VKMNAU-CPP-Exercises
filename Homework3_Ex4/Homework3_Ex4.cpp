#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, y;

    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;

    if (abs(x) < 10 && abs(y) < 10) {
        cout << endl << "Збільшити" << endl << "X: " << x * 2 << endl << "Y: " << y * 2;
    }
    else {
        cout << endl << "Зменшити" << endl << "X: " << x / 2 << endl << "Y: " << y / 2;
    }

    return 0;
}
