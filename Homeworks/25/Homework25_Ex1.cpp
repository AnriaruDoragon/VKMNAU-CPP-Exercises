#include <iostream>
using namespace std;

void cnum(int n) {
    int a=10;
    if (n==0) return;
    else {
        cnum(n/a);
        cout << n%a << endl;
    }
}

int main()
{
    int n;

    cout << "Увести ціле число: ";
    cin >> n;
    
    cnum(n);

    return 0;
}
