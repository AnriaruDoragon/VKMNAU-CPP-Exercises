#include <iostream>
using namespace std;

int main()
{
    double S = 0, x = 3, z = 1;
    int n;

    cout << "Кількість членів: ";
    cin >> n;

    for (int i = 1; i <= abs(n); i++) {
        S += z / x;
        x += 2;
        z += 2;
    }

    cout << endl << "S = " << S;

    return 0;
}
