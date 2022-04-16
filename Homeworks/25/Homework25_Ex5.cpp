#include <iostream>
using namespace std;

void invertItem(double *a, int i, int j) {
    double t=a[i];
    a[i] = a[j];
    a[j] = t;
    i++; j--;
    if (i<j) invertItem(a,i,j);
}

int main()
{
    double a[10];
    int i;
    cout << "Увести 10 дійсних чисел:" << endl;
    for (i=0;i<10;i++) cin >> a[i];
    invertItem(a,0,9);
    for (i=0;i<10;i++) cout << a[i] << " ";

    return 0;
}
