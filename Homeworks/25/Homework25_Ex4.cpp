#include <iostream>
#include <math.h>
using namespace std;

double sumkor(int a) {
    if (a==1) return 1;
    else return sqrt(a)+sumkor(a-1);
}

int main()
{
    int n;
    cout << "n= ";
    cin >> n;
    cout << sumkor(n);

    return 0;
}
