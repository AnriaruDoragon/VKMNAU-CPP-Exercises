#include <iostream>
using namespace std;

double pow(double x, int st) {
    if (st<=0) return 1;
    else return x*pow(x,st-1);
}

int main()
{
    double x;
    int st;

    cout << "Увести число x= ";
    cin >> x;
    cout << "Увести показник степеня st= ";
    cin >> st;

    cout << "x^st = " << pow(x,st);

    return 0;
}
