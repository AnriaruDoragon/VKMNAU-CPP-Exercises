#include <iostream>
using namespace std;

int main()
{
    double S = 0, x, f;
    
    cout << "x: ";
    cin >> x;

    for (int i = 1; i <= 7; i++) {
        f = 1;
        for (int k = 1; k <= 2 * i - 1; k++) {
            f *= k;
        }
        S += 2 * pow(x, 2 * i - 1) / 3 * f;
    }

    cout << endl << "S = " << S;

    return 0;
}
