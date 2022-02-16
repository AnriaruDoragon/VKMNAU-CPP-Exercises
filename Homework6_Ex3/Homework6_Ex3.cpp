#include <iostream>
using namespace std;

int main()
{
    int input, score = 0;

    cout << "1 * 2 = ";
    cin >> input;
    if (input == 1 * 2) score++;

    cout << "2 * 5 = ";
    cin >> input;
    if (input == 2 * 5) score++;

    cout << "3 * 7 = ";
    cin >> input;
    if (input == 3 * 7) score++;

    cout << "4 * 6 = ";
    cin >> input;
    if (input == 4 * 6) score++;

    cout << "5 * 7 = ";
    cin >> input;
    if (input == 5 * 7) score++;

    cout << "6 * 9 = ";
    cin >> input;
    if (input == 6 * 9) score++;

    cout << "7 * 5 = ";
    cin >> input;
    if (input == 7 * 5) score++;

    cout << "8 * 8 = ";
    cin >> input;
    if (input == 8 * 8) score++;

    cout << "9 * 4 = ";
    cin >> input;
    if (input == 9 * 4) score++;

    cout << "0 * 9 = ";
    cin >> input;
    if (input == 0 * 9) score++;

    switch (score)
    {
        case 10:
            cout << endl << "відмінно";
            break;
        case 9:
        case 8:
            cout << endl << "добре";
            break;
        case 7:
        case 6:
            cout << endl << "задовільно";
            break;
        default:
            cout << endl << "погано";
    }

    return 0;
}
