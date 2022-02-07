#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    double c;

    cout << "A: ";
    cin >> a;

    if (a > 0) {
        c = sqrt(a);
        cout << endl << "Корінь: " << c;
    }
    else {
        cout << endl << "Помилка.";
    }

    return 0;
}
