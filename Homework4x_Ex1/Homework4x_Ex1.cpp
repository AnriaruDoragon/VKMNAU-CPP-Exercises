#include <iostream>
using namespace std;

int main()
{
    double L, x, a;

    cout << "x: ";
    cin >> x;
    cout << "a: ";
    cin >> a;
    
    for (int k = 1; k <= 4; k++) {
        switch (k) {
            case 1:
                L = pow(x, 2 + a) + 1;
                break;
            case 2:
                L = (x + 1) / a;
                break;
            case 3:
                L = exp(x - a) - pow(a, x);
                break;
            case 4:
                L = log10(abs(x - a));
                break;
            default:
                L = 0;
        }

        cout << endl << "k = " << k << " | L = " << L;
    }

    return 0;
}
