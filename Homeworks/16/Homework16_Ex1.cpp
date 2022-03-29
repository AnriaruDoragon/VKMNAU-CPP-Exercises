#include <iostream>
using namespace std;

int main()
{
    const int Rows = 10;
    const int Cols = 10;

    int product[Rows][Cols] = { 0 };

    for (int row = 0; row < Rows; row++) {
        for (int col = 0; col < Cols; col++) {
            product[row][col] = row * col;
        }
    }

    for (int row = 1; row < Rows; row++) {
        for (int col = 1; col < Cols; col++) {
            cout << product[row][col] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
