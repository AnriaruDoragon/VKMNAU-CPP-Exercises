#include <iostream>
using namespace std;

int main()
{
    int m;
    double S = 0;

    cout << "m: ";
    cin >> m;

    for (double i = 1; i <= m; i++) {
        if (i - 2 == 0) continue;
        S += i / (i - 2);
    }

    cout << endl << "S: " << S;

    return 0;
}
