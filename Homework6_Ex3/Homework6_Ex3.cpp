#include <iostream>
using namespace std;

int main()
{
    int input, score = 0;

    for (int i = 0; i <= 9; i++) {
        cout << "5 * " << i << " = ";
        cin >> input;
        if (input == 5 * i) score++;
    }

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
