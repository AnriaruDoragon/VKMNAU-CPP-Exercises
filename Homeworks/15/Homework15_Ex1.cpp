#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    double ar[N], tmp;

    for (int i = 0; i < N; i++) {
        cout << i + 1 << " число: ";
        cin >> ar[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-1; j++) {
            if (ar[j] < ar[j+1]) {
                tmp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = tmp;
            }
        }
    }
    
    cout << endl;
    for (int i = 0; i < N; i++) {
        cout << ar[i] << ", ";
    }

    return 0;
}
