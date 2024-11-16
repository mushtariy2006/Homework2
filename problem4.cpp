#include <iostream>
#include <string>

using namespace std;

bool canParkCars(string spots, int n) {
    int count = 0; // Count of cars that can be parked
    int length = spots.length();

    for (int i = 0; i < length; ++i) {
        // Check if the current spot is empty
        if (spots[i] == '0') {
            // Check if the adjacent spots are also empty
            bool leftEmpty = (i == 0 || spots[i - 1] == '0');
            bool rightEmpty = (i == length - 1 || spots[i + 1] == '0');
            
            if (leftEmpty && rightEmpty) {
                // Park a car here
                count++;
                spots[i] = '1'; // Mark the spot as occupied
            }
        }
    }
    return count >= n; // Return true if we can park at least n cars
}

int main() {
    int n;
    string spots;

    // Input number of cars to park
    cout << "Enter number of cars to park: ";
    cin >> n;

    // Input parking spots until a character is entered
    cout << "Enter parking spots (0 for empty, 1 for occupied): ";
    cin >> spots;

    // Check if it's possible to park the cars
    if (canParkCars(spots, n)) {
        cout << "Output: YES" << endl;
    } else {
        cout << "Output: NO" << endl;
    }

    return 0;
}
