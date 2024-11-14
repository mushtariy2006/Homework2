#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> parkingRow;
    int n;
    cout<<"n=";
    cin>>n;
    char input;

    while (cin >> input) {
        if (input == '0' || input == '1') {
            parkingRow.push_back(input - '0');
        } else {
            break;
        }
    }

    int count = 0;
    for (int i = 0; i < parkingRow.size(); i++) {
        if (parkingRow[i] == 0) {
            if ((i == 0 || parkingRow[i-1] == 0) && (i == parkingRow.size()-1 || parkingRow[i+1] == 0)) {
                parkingRow[i] = 1;
                count++;
            }
        }
        if (count == n) break;
    }

    if (count == n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
