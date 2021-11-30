#include <iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout << "C: ";
    cin >> celsius;

    fahrenheit = 1.8 * celsius + 32;

    cout << endl << "F: " << fahrenheit;

    return 0;
}