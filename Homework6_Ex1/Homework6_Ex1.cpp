#include <iostream>
using namespace std;

int main()
{
    double S = 1, x = 3;
    int n;

    cout << "Кількість членів: ";
    cin >> n;

    for (int i = 1; i <= abs(n); i++) {
        S += 1 / x;
        x += 2;
    }

    cout << endl << "S = " << S;

    return 0;
}
