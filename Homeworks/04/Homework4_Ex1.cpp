#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Рік: ";
    cin >> year;

    cout << endl << (year % 4 == 0 ? "Високосний." : "Не високосний.");

    return 0;
}