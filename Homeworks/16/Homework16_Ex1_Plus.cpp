#include <iostream>
using namespace std;

// Та сама таблиця, але без створення нульових полей.

int main()
{
    const int Rows = 9;
    const int Cols = 9;

    int product[Rows][Cols];

    for (int row = 0; row < Rows; row++) {
        for (int col = 0; col < Cols; col++) {
            product[row][col] = (row+1) * (col+1);
        }
    }

    for (int row = 0; row < Rows; row++) {
        for (int col = 0; col < Cols; col++) {
            cout << product[row][col] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
