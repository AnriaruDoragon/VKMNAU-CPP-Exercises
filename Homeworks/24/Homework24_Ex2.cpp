#include <iostream>
#include <stdarg.h>
using namespace std;

float sred_znach(int x, ...) {
    int i=0, j=0, sum=0;
    va_list uk_arg;
    va_start(uk_arg, x);

    if (x!=-1) sum=x;
    else return 0;
    j++;
    while ((i=va_arg(uk_arg, int))!=-1) {
        sum += i;
        j++;
    }
    va_end(uk_arg);
    return (float)sum/j;
}

int main()
{
    float sr=sred_znach(2,3,4,-1);
    cout << "sr=" << sr << endl;
    sr=sred_znach(5,6,7,8,9,-1);
    cout << "sr=" << sr;

    return 0;
}
