#include <iostream>
using namespace std;

int main()
{
    double x, max = -DBL_MAX;

    for (int i = 0; i < 6; i++) {
        cout << "Число " << i + 1 << ": ";
        cin >> x;
        if (x > max) max = x;
    }

    cout << endl << "Max: " << max;

    return 0;
}
