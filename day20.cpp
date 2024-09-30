#include <iostream>
using namespace std;

int main() {
    int n, m;
    
    // Input matrix dimensions
    cout << "Enter the number of rows and columns (n and m): ";
    cin >> n >> m;

    // Declare a 2D array (image)
    int image[n][m];

    // Input the matrix elements from the user
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> image[i][j];
        }
    }

    // Output rotated matrix by 90 degrees
    cout << "Rotated matrix by 90 degrees:" << endl;
    for (int j = 0; j < m; j++) {
        for (int i = n - 1; i >= 0; i--) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    
    // Input matrix dimensions
    cout << "Enter the number of rows and columns (n and m): ";
    cin >> n >> m;

    // Declare a 2D array and a 1D array for sorting
    int array[n][m];
    int tempArray[n*m];

    // Input the matrix elements from the user
    cout << "Enter the matrix elements:" << endl;
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
            tempArray[k++] = array[i][j]; // Flatten into 1D array
        }
    }

    // Sort the 1D array
    sort(tempArray, tempArray + (n * m));

    // Place sorted elements back into the 2D array
    k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = tempArray[k++];
        }
    }

    // Output sorted 2D array
    cout << "Sorted matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
