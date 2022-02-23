#include <iostream>
using namespace std;

int main()
{
    double sum = 0, arr[8];

    for (int i = 0; i <= 7; i++) {
        cout << "Число " << i+1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << endl << "Sum = " << sum;

    return 0;
}
