#include <iostream>
using namespace std;

int main()
{
    int number, product = 1;

    cout << "Число: ";
    cin >> number;

    while (number > 0) {
        int digit = number % 10;
        number /= 10;
        product *= digit;
    }

    cout << endl << "Добуток: " << product;

    return 0;
}