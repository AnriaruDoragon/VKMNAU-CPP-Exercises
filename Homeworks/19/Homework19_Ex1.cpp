#include <iostream>
using namespace std;

int main()
{
    int sum;
    int ar[5][7];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            cout << "ar[" << i+1 << "][" << j+1 << "]: ";
            cin >> ar[i][j];
        }
    }

    for (int j = 0; j < 7; j++) {
        sum = 0;
        for (int i = 0; i < 5; i++) {
            if (ar[i][j] < 0) sum += ar[i][j];
        }
        cout << endl << j+1 << " = " << sum;
    }

    return 0;
}
