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

    if (x == y) {
        cout << endl << "Добуток: " << x * y;
    }
    else {
        cout << endl << "Модуль різниці: " << abs(x - y);
    }

    return 0;
}
