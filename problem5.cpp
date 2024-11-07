#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);  // Read the input string

    int uppercaseCount = 0;
    int lowercaseCount = 0;

    string uppercaseChars = "";
    string lowercaseChars = "";

    // Iterate over each character in the string
    for (char c : s) {
        if (isupper(c)) {
            uppercaseCount++;
            uppercaseChars += c;
        } else if (islower(c)) {
            lowercaseCount++;
            lowercaseChars += c;
        }
    }

    // Output uppercase count and characters
    cout << uppercaseCount;
    if (uppercaseCount > 0) {
        cout << " " << uppercaseChars << endl;
    } else {
        cout << endl;
    }

    // Output lowercase count and characters
    cout << lowercaseCount;
    if (lowercaseCount > 0) {
        cout << " " << lowercaseChars << endl;
    } else {
        cout << endl;
    }

    return 0;
}
