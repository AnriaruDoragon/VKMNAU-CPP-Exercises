#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    while (i <= 10) {
        cout << i << "^2 = " << pow(i, 2) << endl;
        i++;
    }

    return 0;
}
