#include <iostream>
#include <math.h>
using namespace std;

double calculate(double a, double b) {
    return (a+sqrt(b))/(b+sqrt(a));
}

int main()
{
    cout << calculate(13,7) + calculate(15,12) + calculate(21,32);

    return 0;
}
