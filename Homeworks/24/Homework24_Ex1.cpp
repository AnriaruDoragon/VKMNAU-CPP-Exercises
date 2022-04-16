#include <iostream>
using namespace std;

double divide(int a, int b = 2) {
    return (double)a/b;
}

int main()
{
    cout << divide(4, 2) << endl << divide(6, 3) << endl 
    << divide(5, 3) << endl << divide(7, 3);

    return 0;
}
