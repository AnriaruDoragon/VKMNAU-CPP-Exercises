#include <iostream>
using namespace std;

int main()
{
    double A, B;
    int N;
    double S;

    cout << "Ширина: ";
    cin >> A;
    cout << "Довжина: ";
    cin >> B;
    cout << "Кількість комп’ютерів: ";
    cin >> N;

    S = A * B / N;

    cout << endl << "На кожен компютер: " << S << " m^2";

    return 0;
}