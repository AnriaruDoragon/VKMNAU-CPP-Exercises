#include <iostream>
using namespace std;

int main()
{
    double S = 0, f, x;
    int i = 1, k;

    cout << "x: ";
    cin >> x;

    while (i <= 5) {
        f = k = 1;
        while (k <= i) {
            f = f * k;
            k++;
        }
        S += pow(-1, i) * pow(x, i + 1) / f;
        i++;
    }

    cout << endl << "S = " << S;

    return 0;
}
