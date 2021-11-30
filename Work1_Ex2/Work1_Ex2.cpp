#include <iostream>
using namespace std;

int main()
{
    double stockKG, stockLBS;

    cout << "KG: ";
    cin >> stockKG;

    stockLBS = stockKG * 1000 / 400;

    cout << endl << "LBS: " << stockLBS;

    return 0;
}
