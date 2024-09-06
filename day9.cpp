
int main() {
    int num = 42;        // Declare and initialize an integer variable
    int* ptr = &num;     // Declare a pointer and store the address of the variable

    // Print the value using the variable itself
    cout << "Value of num using variable: " << num << endl;

    // Print the value using the pointer
    cout << "Value of num using pointer: " << *ptr << endl;

    return 0;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Declare an array of integers
    int* ptr = arr;                   // Pointer pointing to the first element of the array

    // Print all elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": " << *(ptr + i) << endl;
    }

    return 0;
}


int main() {
    int num = 100;      // Declare an integer variable
    int* ptr = &num;    // Pointer to the integer
    int** ptr2 = &ptr;  // Pointer to the pointer

    // Print the value of num using the variable
    cout << "Value of num using variable: " << num << endl;

    // Print the value of num using the pointer
    cout << "Value of num using pointer: " << *ptr << endl;

    // Print the value of num using the pointer to pointer
    cout << "Value of num using pointer to pointer: " << **ptr2 << endl;

    return 0;
}
