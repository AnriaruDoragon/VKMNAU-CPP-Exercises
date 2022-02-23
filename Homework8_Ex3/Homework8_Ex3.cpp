#include <iostream>
using namespace std;

int main()
{
    double S = 0, f, x;
    int i = 1, k;

    cout << "x: ";
    cin >> x;

    do {
        f = k = 1;
        do {
            f = f * k;
            k++;
        } while (k <= i);
        S += pow(-1, i) * pow(x, i + 1) / f;
        i++;
    } while (i <= 5);

    cout << endl << "S = " << S;

    return 0;
}
