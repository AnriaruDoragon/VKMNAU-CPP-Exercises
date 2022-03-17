#include <iostream>
using namespace std;

int main()
{
    int n = 0, x[12];

    for (int i = 0; i < 12; i++) {
        cout << i + 1 << " число: ";
        cin >> x[i];

        if (x[i] > -10 && x[i] < 30 && x[i] % 2 == 0) n++;
    }

    cout << endl << "n = " << n;

    return 0;
}
