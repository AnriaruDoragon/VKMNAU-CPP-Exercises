#include <iostream>
using namespace std;

int minimum(int *mas, int n, int k) {
    if (k == n-1) return k;
    int a = minimum(mas,n,k+1);
    if (mas[a]<mas[k]) return a;
    else return k;
}

int main()
{
    int i, n, min;
    cout << "Уведіть розмір масиву: ";
    cin >> n;
    int *mas = new int[n];
    for (i=0;i<n;i++) {
        cout << "Уведіть mas[" << i << "]: ";
        cin >> mas[i];
    }
    cout << endl;
    min = minimum(mas,n,0);
    cout << "Мінімум: mas[" << min << "] = " << mas[min] << endl;

    return 0;
}
