#include <iostream>
using namespace std;

#define MAX 1000  // Maximum size of the stack

class Stack {
    int top;  // Index of the top element
    int arr[MAX];  // Array to store stack elements

public:
    Stack() { top = -1; }  // Constructor to initialize stack

    // Function to add an element to the stack
    bool push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow" << endl;
            return false;
        } else {
            arr[++top] = x;
            return true;
        }
    }

    // Function to remove the top element from the stack
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return -1;
        } else {
            int x = arr[top--];
            return x;
        }
    }

    // Function to view the top element without removing it
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element is: " << stack.peek() << endl;

    cout << "Elements popped from stack: " << endl;
    cout << stack.pop() << " ";
    cout << stack.pop() << " ";
    cout << stack.pop() << endl;

    // Check if stack is empty
    if (stack.isEmpty()) {
        cout << "Stack is empty now." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

#define MAX 1000  // Maximum size of the stack

class Stack {
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; }

    bool push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow" << endl;
            return false;
        } else {
            arr[++top] = x;
            return true;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return -1;
        } else {
            int x = arr[top--];
            return x;
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack stack;
    int n;

    // Input number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Input elements and push them into the stack
    cout << "Enter the values: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        stack.push(value);
    }

    // Pop and print elements in reverse order
    cout << "Values popped from stack: ";
    while (!stack.isEmpty()) {
        cout << stack.pop() << " ";
    }
    cout << endl;

    return 0;
}
