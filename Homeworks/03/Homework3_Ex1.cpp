#include <iostream>
using namespace std;

int main()
{
    int a, b;
    double c;

    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;

    if (b != 0) {
        c = (double)a / b;
        cout << endl << "Частка: " << c;
    }
    else {
        cout << endl << "Помилка.";
    }

    return 0;
}
