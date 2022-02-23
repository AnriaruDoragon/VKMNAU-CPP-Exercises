#include <iostream>
using namespace std;

int main()
{
    double S = 0, f, x;

    cout << "x: ";
    cin >> x;

    for (int i = 1; i <= 5; i++) {
        f = 1;
        for (int k = 1; k <= i; k++) {
            f = f * k;
        }
        S += pow(-1, i) * pow(x, i + 1) / f;
    }

    cout << endl << "S = " << S;

    return 0;
}
