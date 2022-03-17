#include <iostream>
using namespace std;

int main()
{
    double L, x, a;
    int k = 1;

    cout << "x: ";
    cin >> x;
    cout << "a: ";
    cin >> a;
    
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

    cout << endl << "L = " << L;

    return 0;
}
