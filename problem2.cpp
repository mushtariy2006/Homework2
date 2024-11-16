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

    // Calculate row averages and column sums
    double totalRowAverage = 0.0;
    double totalColAverage = 0.0;

    // Calculate the sum of all elements for rows and columns
    int rowSum, colSum;

    // Sum of all rows
    for (int i = 0; i < m; ++i) {
        rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += matrix[i][j];
        }
        totalRowAverage += rowSum; // Add row sum to total row average
    }

    // Sum of all columns
    for (int j = 0; j < n; ++j) {
        colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += matrix[i][j];
        }
        totalColAverage += colSum; // Add column sum to total column average
    }

    // Calculate actual averages
    totalRowAverage /= m; // Average of row sums
    totalColAverage /= n; // Average of column sums

    // Compare the averages
    if (totalRowAverage == totalColAverage) {
        cout << "Output: YES" << endl;
    } else {
        cout << "Output: NO" << endl;
    }

    return 0;
}
