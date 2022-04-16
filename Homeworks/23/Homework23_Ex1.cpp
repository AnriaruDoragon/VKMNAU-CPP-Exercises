#include <iostream>
using namespace std;

int min(int a[4][3]) {
    int minimum = INT_MAX;
    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            if (a[i][j] < minimum) minimum = a[i][j];
        }
    }
    return minimum;
}

int main()
{
    int array[4][3];

    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            cout << "array[" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "Мінімальний елемент матриці = " << min(array);

    return 0;
}
