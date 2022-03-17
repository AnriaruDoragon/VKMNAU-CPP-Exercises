#include <iostream>
using namespace std;

int main()
{
    double price;
    int bills, coins;

    cout << "Цена: ";
    cin >> price;

    bills = price;
    coins = (price - bills) * 100;

    cout << endl << bills << " грн. " << coins << " коп.";

    return 0;
}
