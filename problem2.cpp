#include <iostream>
#include <vector>

using namespace std;

bool isAverageMatrix(const vector<vector<int>>& matrix, int m, int n) {
    double rowSum, colSum;
    double rowAverage = 0.0, colAverage = 0.0;

    // Calculate row averages
    for (int i = 0; i < m; ++i) {
        rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += matrix[i][j];
        }
        rowAverage += (rowSum / n);
    }
    rowAverage /= m; // Average of all row averages

    // Calculate column averages
    for (int j = 0; j < n; ++j) {
        colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += matrix[i][j];
        }
        colAverage += (colSum / m);
    }
    colAverage /= n; // Average of all column averages

    // Compare the overall row average and column average
    return rowAverage == colAverage;
}

int main() {
    int m, n;

    // Read matrix dimensions
    cout << "Enter dimensions m and n: ";
    cin >> m >> n;

    // Input matrix
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Check if it's an average matrix
    if (isAverageMatrix(matrix, m, n)) {
        cout << "Output: YES" << endl;
    } else {
        cout << "Output: NO" << endl;
    }

    return 0;
}

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    if (isAverageMatrix(matrix, m, n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
