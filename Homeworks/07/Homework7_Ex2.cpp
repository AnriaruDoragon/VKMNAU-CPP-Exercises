#include <iostream>
using namespace std;

int main()
{
    double S = 0, x = 3, z = 1;
    int n;

    cout << "Кількість членів: ";
    cin >> n;

    for (x; x <= n; x += 2) {
        S += z / x;
        z += 2;
    }

    cout << endl << "S = " << S;

    return 0;
}
