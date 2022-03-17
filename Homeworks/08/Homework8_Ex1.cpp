#include <iostream>
using namespace std;

int main()
{
    int m;
    double p, S = 0;

    cout << "m: ";
    cin >> m;

    for (int i = 1; i <= m; i++) {
        if (i != 2) {
            p = 1;
            for (int k = 1; k <= i + 1; k++) {
                p *= (k + 3) / k;
                S += p * i / (i - 2);
            }
        }
    }

    cout << endl << "S = " << S;

    return 0;
}
