#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const int N = 10;
    double x[N];
    double m = 1, n = 0, max = -DBL_MAX;

    for (int i = 0; i < N; i++) {
        cout << i + 1 << " число: ";
        cin >> x[i];

        if (x[i] != 0) m *= x[i];
        if (x[i] < 0) n++;
        if (x[i] > max) max = x[i];
    }

    cout << endl << "Добуток ненульових елементів = " << m 
        << endl << "Кількість від’ємних елементів = " << n 
        << endl << "Максимальний елемент = " << max;

    return 0;
}
