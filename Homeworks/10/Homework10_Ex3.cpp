#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    do {
        cout << i << "^2 = " << pow(i, 2) << endl;
        i++;
    } while (i <= 10);

    return 0;
}
