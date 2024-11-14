#include <iostream>
#include <vector>
using namespace std;

bool isAverageMatrix(const vector<vector<int>>& matrix, int m, int n) {
    // Calculate row averages
    double rowAverage = 0.0;
    for (int i = 0; i < m; i++) {
        double sum = 0;
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        double currentRowAverage = sum / n;
        if (i == 0) {
            rowAverage = currentRowAverage;
        } else if (currentRowAverage != rowAverage) {
            return false;
        }
    }

    // Calculate column averages
    double colAverage = 0.0;
    for (int j = 0; j < n; j++) {
        double sum = 0;
        for (int i = 0; i < m; i++) {
            sum += matrix[i][j];
        }
        double currentColAverage = sum / m;
        if (j == 0) {
            colAverage = currentColAverage;
        } else if (currentColAverage != colAverage) {
            return false;
        }
    }

    // Check if both row and column averages are equal
    return (rowAverage == colAverage);
}

int main() {
    int m, n;
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));


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
