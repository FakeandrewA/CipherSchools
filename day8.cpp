// Function to return the length of a string
int stringLength(const string &str) {
    return str.length(); // Using the built-in length() function
}
int countCharacter(const string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++; // Increment count if character matches
        }
    }
    return count;
}
string concatenateStrings(const string &str1, const string &str2) {
    return str1 + str2; // Using the + operator to concatenate strings
}
