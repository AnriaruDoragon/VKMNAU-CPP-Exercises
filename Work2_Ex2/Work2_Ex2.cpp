#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    double avgA, avgG;

    cout << "Число 1: ";
    cin >> num1;
    cout << "Число 2: ";
    cin >> num2;

    avgA = (pow(num1, 3) + pow(num2, 3)) / 2;
    avgG = pow(abs(num1) * abs(num2), (double)1 / 2);

    cout << endl << "Середнє арифметичне: " << avgA << endl << "Середнє геометричне: " << avgG;

    return 0;
}