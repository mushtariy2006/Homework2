#include <iostream>
#include <vector>

using namespace std;

int find_common_divisor(const vector<int>& arr) {
    int smallest = arr[0];
    for (int num : arr) {
        if (num < smallest) {
            smallest = num;
        }
    }

    for (int num : arr) {
        if (num % smallest != 0) {
            return -1;
        }
    }

    return smallest;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = find_common_divisor(arr);
    cout << result << endl;

    return 0;
}