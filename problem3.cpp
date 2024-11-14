#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n, t;
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;
    // Input number of rows, columns, and number of modifications


    // Initialize the matrix with size m x n
    vector<vector<int>> matrix(m, vector<int>(n));

    // Input the matrix elements
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    cout<<"t=";
    cin>>t;

    // Process the modification queries
    for (int i = 0; i < t; ++i) {
        int row, col, value;
        cin >> row >> col >> value;

        // Convert from 1-based index to 0-based index for the matrix
        matrix[row - 1][col - 1] = value;
    }

    // Output the modified matrix
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
