#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int m = 3, n = 5;
    int max = INT_MIN, y, x, ar[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "ar[" << i << "][" << j << "]: ";
            cin >> ar[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(10) << ar[i][j];
            if (ar[i][j] > max) {
                max = ar[i][j];
                y = i;
                x = j;
            }
        }
        cout << "\n";
    }

    cout << endl << "Максимальний елемент масиву = " << max << endl << "Індекси = " << y << " і " << x;

    return 0;
}
