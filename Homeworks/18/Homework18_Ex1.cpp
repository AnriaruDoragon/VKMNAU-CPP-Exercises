#include <iostream>
using namespace std;

int main()
{
    int sum;
    const string names[3] = { "Антонов", "Бондарь", "Василенко" };
    const int table[3][5] = {
        { 95, 95, 95, 95, 95 },
        { 90, 85, 90, 95, 95 },
        { 60, 75, 65, 80, 80 }
    };

    for (int i = 0; i < 3; i++) {
        sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += table[i][j];
        }
        cout << names[i] << " - " << sum << endl;
    }

    return 0;
}
