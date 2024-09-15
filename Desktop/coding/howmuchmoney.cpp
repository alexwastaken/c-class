#include <iostream>
using namespace std;

float numberOfQuarters = 0;
float numberOfDimes = 0;
float numberOfNickles = 0;
float numberOfPennies = 0;

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

    float total = (numberOfQuarters * .25) + (numberOfDimes * .1) + (numberOfNickles * .05) + (numberOfPennies *.01);

    int totalCents = total * 100;

    int cents = totalCents % 100;

    int dollars = totalCents / 100;

    cout << "The total is " << dollars << " dollars " << "and " << cents << " cents"; 




}


