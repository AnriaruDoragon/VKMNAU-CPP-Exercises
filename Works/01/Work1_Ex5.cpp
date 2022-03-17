#include <iostream>
using namespace std;

int main()
{
    int timeLeftMinutes, toolPrepareMinutes, sortMinutes, setupWorkbenchMinutes, repairingMinutes, repairedParts;

    timeLeftMinutes = 2 * 60;
    repairingMinutes = 5;

    cout << "Хв на підготовку: ";
    cin >> toolPrepareMinutes;
    cout << endl << "Хв на сортування: ";
    cin >> sortMinutes;
    cout << endl << "Хв на налагоджування: ";
    cin >> setupWorkbenchMinutes;

    timeLeftMinutes -= toolPrepareMinutes + sortMinutes + setupWorkbenchMinutes;

    repairedParts = floor(timeLeftMinutes / repairingMinutes);

    cout << endl << "Деталей відремонтовано: " << repairedParts;

    return 0;
}