#include <iostream>
using namespace std;
int sumOfMultiplications(int arr1[], int arr2[], int n) {
    int sum = 0; // Initialize the sum to 0
    for (int i = 0; i < n; i++) {
        sum += arr1[i] * arr2[i]; // Multiply corresponding elements and add to sum
    }
    return sum; // Return the final sum
}

int main() {
    int n;

    // Ask the user for the size of the arrays
    cout << "Enter the size of the arrays: ";
    cin >> n;

    int arr1[n], arr2[n];

    // Input elements for the first array
    cout << "Enter elements for the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Input elements for the second array
    cout << "Enter elements for the second array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // Call the function to calculate the sum of products
    int result = sumOfMultiplications(arr1, arr2, n);

    // Output the result
    cout << "The sum of the products of corresponding elements is: " << result << endl;

    return 0;
}
