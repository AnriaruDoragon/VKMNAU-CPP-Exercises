#include <iostream>
using namespace std;

int main()
{
    double R1, R2;
    double r1 = 22, r2 = 2.5;

    R1 = (r1 * r2) / (r1 + r2);
    R2 = r1 + r2;

    cout << "R1 = " << R1 << endl << "R2 = " << R2;

    return 0;
}