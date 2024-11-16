#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    
    // Input dimensions of the matrix
    cout << "Enter dimensions m and n: ";
    cin >> m >> n;

    // Initialize the matrix
    vector<vector<int>> matrix(m, vector<int>(n));

    // Input the matrix elements
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Calculate the sum of rows and columns
    double rowSum = 0.0;
    double colSum = 0.0;

    // Sum row averages
    for (int i = 0; i < m; ++i) {
        double sum = 0.0;
        for (int j = 0; j < n; ++j) {
            sum += matrix[i][j];
        }
        rowSum += (sum / n);
    }

    // Sum column averages
    for (int j = 0; j < n; ++j) {
        double sum = 0.0;
        for (int i = 0; i < m; ++i) {
            sum += matrix[i][j];
        }
        colSum += (sum / m);
    }

    // Compare the averages
    if (rowSum == colSum) {
        cout << "Output: YES" << endl;
    } else {
        cout << "Output: NO" << endl;
    }

    return 0;
}
