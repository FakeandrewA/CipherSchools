#include <iostream>
using namespace std;

void max() {
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "The largest number is: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "The largest number is: " << num2 << endl;
    } else {
        cout << "The largest number is: " << num3 << endl;
    }

    return 0;
}

void grade() {
    int score;

    cout << "Enter the score: ";
    cin >> score;

    if (score >= 90 && score <= 100) {
        cout << "Grade: A" << endl;
    } else if (score >= 80 && score < 90) {
        cout << "Grade: B" << endl;
    } else if (score >= 70 && score < 80) {
        cout << "Grade: C" << endl;
    } else if (score >= 60 && score < 70) {
        cout << "Grade: D" << endl;
    } else if (score >= 0 && score < 60) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid score!" << endl;
    }

    return 0;
}


void mon() {
    int month;

    cout << "Enter a number: ";
    cin >> month;

    switch (month) {
        case 1: cout << "The month is: January" << endl; break;
        case 2: cout << "The month is: February" << endl; break;
        case 3: cout << "The month is: March" << endl; break;
        case 4: cout << "The month is: April" << endl; break;
        case 5: cout << "The month is: May" << endl; break;
        case 6: cout << "The month is: June" << endl; break;
        case 7: cout << "The month is: July" << endl; break;
        case 8: cout << "The month is: August" << endl; break;
        case 9: cout << "The month is: September" << endl; break;
        case 10: cout << "The month is: October" << endl; break;
        case 11: cout << "The month is: November" << endl; break;
        case 12: cout << "The month is: December" << endl; break;
        default: cout << "Invalid input!" << endl; break;
    }

    return 0;
}

