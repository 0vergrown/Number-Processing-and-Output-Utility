#include <iostream>
using namespace std;

int main() {
    int firstNum, secondNum;

    // Task #02: Accept user input
    do {
        cout << "Enter two integers (first smaller than second): ";
        cin >> firstNum >> secondNum;
    } while (firstNum >= secondNum);

    int current = firstNum;
    int sumEven = 0;
    int sumOddSquares = 0;

    // Task #03: Output odd numbers
    cout << "Odd numbers between " << firstNum << " and " << secondNum << ": ";
    while (current <= secondNum) {
        if (current % 2 != 0) {
            cout << current << " ";
            // Task #06: Sum of odd numbers squared
            sumOddSquares += current * current;
        }
        current++;
    }
    cout << endl;

    // Task #04: Sum of even numbers
    current = firstNum;
    while (current <= secondNum) {
        if (current % 2 == 0) {
            sumEven += current;
        }
        current++;
    }
    cout << "Sum of even numbers between " << firstNum << " and " << secondNum << ": " << sumEven << endl;

    // Task #05: Output numbers 1-10 and their squares, simplified output
    cout << "Numbers and their squares from 1 to 10: ";
    current = 1;
    while (current <= 10) {
        cout << current << " " << current * current << " ";
        current++;
    }
    cout << endl;

    // Task #06: Output sum of odd numbers squared
    cout << "Sum of the squares of odd numbers between " << firstNum << " and " << secondNum << ": " << sumOddSquares << endl;

    // Task #07: Output uppercase letters
    char letter = 'A';
    cout << "Uppercase letters: ";
    while (letter <= 'Z') {
        cout << letter << " ";
        letter++;
    }
    cout << endl;

    return 0;
}
