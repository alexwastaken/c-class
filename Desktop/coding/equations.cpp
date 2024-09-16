#include <iostream>
using namespace std;

int main() {
    
    cout << "Please enter two positive integers, separated by a space:"; // separated was spelled wrong fixed

    int firstInteger, secondInteger;

    cin >> firstInteger >> secondInteger;

    // Try to add comments to code really helps with PR's and maintenance
    // Validate that the input is positive and handle invalid input
    if (firstInteger <= 0 || secondInteger <= 0) {
        cout << "Error: Both numbers must be positive integers." << endl;
        return 1;  // Exit the program
    }

    // Check for division by zero
    if (secondInteger == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1;
    }

    int additionAnswer = firstInteger + secondInteger;
    int subtractionAnswer = firstInteger - secondInteger;
    int multiplicationAnswer = firstInteger * secondInteger;
    float floatdivisionAnswer = float(firstInteger) / secondInteger; // Don't need to cast the secondInteger, it's not needed
    int divisionAnswer = firstInteger / secondInteger;
    int modAnswer = firstInteger % secondInteger;

    cout << firstInteger << " + " << secondInteger << " = " << additionAnswer << endl;
    cout << firstInteger << " - " << secondInteger << " = " << subtractionAnswer << endl;
    cout << firstInteger << " * " << secondInteger << " = " << multiplicationAnswer << endl;
    cout << firstInteger << " / " << secondInteger << " = " << floatdivisionAnswer << endl;
    cout << firstInteger << " div " << secondInteger << " = " << divisionAnswer << endl;
    cout << firstInteger << " mod " << secondInteger << " = " << modAnswer << endl;

    //this is a test
    //i want to add this to my tool
    //this is another test
}