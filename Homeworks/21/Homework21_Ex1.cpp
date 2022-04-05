#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int count = 0;
    float matrix[5][3];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = sqrt(abs(pow(i, 3)-pow(j, 2)))/log10(i+j+1);
            if (matrix[i][j] < 2) count++;
            cout << setw(15) << matrix[i][j];
        }
        cout << endl;
    }

    cout << endl << "Кількість елементів менше за 2 = " << count;

    return 0;
}
