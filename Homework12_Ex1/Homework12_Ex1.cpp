#include <iostream>
using namespace std;

int main()
{
    int ar1[10], sum = 0;
    float ar2[10];

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << " число: ";
        cin >> ar1[i];
        if (i % 2 != 0) sum += ar1[i];
    }

    for (int i = 0; i < 10; i++) {
        ar2[i] = (float)ar1[i] / sum;
        cout << endl << i + 1 << " = " << ar2[i];
    }

    return 0;
}
