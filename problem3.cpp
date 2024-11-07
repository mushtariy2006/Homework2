#include <iostream>
#include <vector>

using namespace std;

int findSingleNumber(const vector<int>& nums) {
    int single_number = 0;
    for (int num : nums) {
        single_number ^= num; // XOR operation
    }
    return single_number;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int result = findSingleNumber(nums);
    cout << result << endl;

    return 0;
}