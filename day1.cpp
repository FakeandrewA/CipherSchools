#include <iostream>
#include <string>
using namespace std;

void add() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    string concatenatedString = str1 + str2;

    cout << "Concatenated string: " << concatenatedString << endl;

    return 0;
}


void avg() {
    int grade1, grade2, grade3, grade4, grade5;
    double average;

    cout << "Enter grade 1: ";
    cin >> grade1;
    cout << "Enter grade 2: ";
    cin >> grade2;
    cout << "Enter grade 3: ";
    cin >> grade3;
    cout << "Enter grade 4: ";
    cin >> grade4;
    cout << "Enter grade 5: ";
    cin >> grade5;

    average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5.0;

    cout << "The average grade is: " << average << endl;

    return 0;
}

void sq() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int square = number * number;

    cout << "The square of " << number << " is: " << square << endl;

    return 0;
}
