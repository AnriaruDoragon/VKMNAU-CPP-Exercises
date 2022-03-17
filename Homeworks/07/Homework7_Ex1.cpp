#include <iostream>
using namespace std;

int main()
{
    double S = 1, x = 3;
    int n;

    cout << "Кількість членів: ";
    cin >> n;

    for (x; x <= n; x += 2) {
        S += 1 / x;
    }

    cout << endl << "S = " << S;

    return 0;
}
