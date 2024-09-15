#include <iostream>
using namespace std;

int numberOfQuarters = 0;
int numberOfDimes = 0;
int numberOfNickles = 0;
int numberOfPennies = 0;

int main() {

    cout << "Please enter number of coins:\n";

    cout << "# of quarters:";
    cin >> numberOfQuarters;

    cout << "# of dimes:";
    cin >> numberOfDimes;
    
    cout << "# of nickles:";
    cin >> numberOfNickles;
    
    cout << "# of pennies:";
    cin >> numberOfPennies;

    int total = (numberOfQuarters * 25) + (numberOfDimes * 10) + (numberOfNickles * 5) + (numberOfPennies * 1);

    int cents = total % 100;

    int dollars = total / 100;

    cout << "The total is " << dollars << " dollars " << "and " << cents << " cents"; 

}


