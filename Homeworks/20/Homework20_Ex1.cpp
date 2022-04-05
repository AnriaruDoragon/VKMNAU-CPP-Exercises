#include <iostream>
using namespace std;

int main()
{
    int mul;
    const int ar[4][7] = {
        { 0, 15, 19, -38, 1, 99, 5 },
        { 18, -10, 10, 25, 0, 0, 0 },
        { 0, -15, 85, 113, -1, 1, 7 },
        { 199, -66, -69, 0, 7, 55, 23 }
    };

    for (int j = 0; j < 7; j++) {
        if (j%2 == 0) {
            mul = 1;
            for (int i = 0; i < 4; i++) {
                if (ar[i][j] != 0) mul *= ar[i][j];
            }
            cout << j << " = " << mul << endl;
        }
    }

    return 0;
}
