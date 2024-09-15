#include <iostream>
using namespace std;

const int QUARTERS = 25;
const int DIMES = 10;
const int NICKLES = 5;
const int PENNIES = 1;

int main() {

    int numberOfQuarters = 0;
    int numberOfDimes = 0;
    int numberOfNickles = 0;
    int numberOfPennies = 0;

    int amountOfDollars, amountOfCents;

    cout << "Please enter your amount in the format of dollars and cents separated by a space\n";

    cin >> amountOfDollars >> amountOfCents;

    cout << amountOfDollars << " dollars and " << amountOfCents << " cents are:\n";

    int totalCents = ((amountOfDollars * 100) + amountOfCents);

    int totalQuarters = totalCents / QUARTERS;

    int totalLeft1 = totalCents - (totalQuarters * QUARTERS);

    int totalDimes = totalLeft1 / DIMES;

    int totalLeft2 = totalLeft1 - (totalDimes * DIMES);

    int totalNickles = totalLeft2 / NICKLES;

    int totalLeft3 = totalLeft2 - (totalNickles * NICKLES);

    int totalPennies = totalLeft3 / PENNIES;

    cout << totalQuarters << " quarters " << totalDimes << " dimes " << totalNickles << " nickles " << totalPennies << " and pennies";

}


