#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    double ar[N];

    for (int i = 0; i < N; i++) {
        cout << i + 1 << " число: ";
        cin >> ar[i];
    }

    for (int i = 0; i < N; i++) {
        if (i + 1 == N) {
            cout << endl << "Масив є впорядкований.";
            break;
        }
        if (ar[i] > ar[i + 1]) {
            cout << endl << "Масив не є впорядкованим.";
            break;
        }
    }

    return 0;
}
