// Function to find the maximum value in the array
int findMax(const int arr[], int size) {
    int maxVal = arr[0]; // Initialize the first element as the maximum value
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // Update maxVal if a larger value is found
        }
    }
    return maxVal;
}

bool isPalindrome(const string &str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Move left index forward if the character is not alphanumeric
        while (left < right && !isAlphanumeric(str[left])) {
            left++;
        }
        // Move right index backward if the character is not alphanumeric
        while (left < right && !isAlphanumeric(str[right])) {
            right--;
        }
        // Compare characters (case-insensitive)
        if (tolower(str[left]) != tolower(str[right])) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // Is a palindrome
}

