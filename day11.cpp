// Function to check if target value exists in the array
void findTarget(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

// Function to find the index of target value in the array
int findTargetIndex(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i + 1; // 1-based index
        }
    }
    return -1; // If target is not found
}
