#include <iostream>
using namespace std;

int main()
{
    double percentage, days, amount, revune;

    cout << "Ставка %: ";
    cin >> percentage;
    cout << endl << "Строк ДН: ";
    cin >> days;
    cout << endl << "Вложение ГРН: ";
    cin >> amount;

    revune = (percentage / 365) * amount * days;

    cout << endl << "Доход ГРН: " << revune;

    return 0;
}