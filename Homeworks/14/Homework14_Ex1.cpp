#include <iostream>
using namespace std;

int main()
{
    int ar[2];

    ar[0] = 37;
    ar[1] = 22;
    cout << "[" << ar[0] << ", " << ar[1] << "] >> [";

    ar[0] = ar[0] + ar[1];
    ar[1] = ar[0] - ar[1];
    ar[0] = ar[0] - ar[1];

    cout << ar[0] << ", " << ar[1] << "]";

    return 0;
}
