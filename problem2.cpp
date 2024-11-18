#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate row averages
    double row_avg = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            row_avg += matrix[i][j];
        }
    }
    row_avg /= (m * n);

    // Check if all columns also have the same average as rows
    bool is_average_matrix = true;
    for (int j = 0; j < n; j++) {
        double col_avg = 0;
        for (int i = 0; i < m; i++) {
            col_avg += matrix[i][j];
        }
        col_avg /= m;

        if (col_avg != row_avg) {
            is_average_matrix = false;
            break;
        }
    }

    if (is_average_matrix) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
