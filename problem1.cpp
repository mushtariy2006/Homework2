#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += matrix[i][j];
        }
        cout <<  rowSum << endl;
    }

    return 0;
}
