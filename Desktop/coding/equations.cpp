#include <iostream>
using namespace std;

int main() {

    cout << "Please enter two positive integers, seperated by a space:";

    int firstInteger, secondInteger;

    cin >> firstInteger >> secondInteger;

    int additionAnswer = firstInteger + secondInteger;
    int subtractionAnswer = firstInteger - secondInteger;
    int multiplicationAnswer = firstInteger * secondInteger;
    float floatdivisionAnswer = float(firstInteger) / float(secondInteger);
    int divisionAnswer = firstInteger / secondInteger;
    int modAnswer = firstInteger % secondInteger;

    cout << firstInteger << " + " << secondInteger << " = " << additionAnswer << endl;
    cout << firstInteger << " - " << secondInteger << " = " << subtractionAnswer << endl;
    cout << firstInteger << " * " << secondInteger << " = " << multiplicationAnswer << endl;
    cout << firstInteger << " / " << secondInteger << " = " << floatdivisionAnswer << endl;
    cout << firstInteger << " div " << secondInteger << " = " << divisionAnswer << endl;
    cout << firstInteger << " mod " << secondInteger << " = " << modAnswer << endl;

}