#include <iostream>
using namespace std;

void Nnatural() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int sum = 0;
    for(int i = 1; i <= N; ++i) {
        sum += i;
    }

    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;
    return 0;
}


void fact() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int factorial = 1;
    for(int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    cout << "The factorial of " << N << " is: " << factorial << endl;
    return 0;
}

void mull() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Multiplication table of " << N << ":" << endl;
    for(int i = 1; i <= 10; ++i) {
        cout << N << " x " << i << " = " << N * i << endl;
    }

    return 0;
}
