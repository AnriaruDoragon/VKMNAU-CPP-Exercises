#include <iostream>
using namespace std;

int main()
{
    double A, B;
    double C, D;
    double M, N;
    double S;

    cout << "Ширина кімнати: ";
    cin >> A;
    cout << "Довжина кімнати: ";
    cin >> B;

    cout << endl << "Ширина вікна: ";
    cin >> C;
    cout << "Висота вікна: ";
    cin >> D;

    cout << endl << "Ширина дверей: ";
    cin >> M;
    cout << "Висота дверей: ";
    cin >> N;

    S = A * B - C * D - M * N;

    cout << endl << "Площа стін для обклеювання шпалерами: " << S << " m^2";

    return 0;
}