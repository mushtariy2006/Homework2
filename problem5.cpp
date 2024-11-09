#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int uppercaseCount = 0, lowercaseCount = 0;
    string uppercaseChars = "", lowercaseChars = "";

    for (char c : s) {
        if (isupper(c)) {
            uppercaseCount++;
            if (uppercaseCount > 1) uppercaseChars += " ";  // Add space only after the first character
            uppercaseChars += c;
        } else if (islower(c)) {
            lowercaseCount++;
            if (lowercaseCount > 1) lowercaseChars += " ";  // Add space only after the first character
            lowercaseChars += c;
        }
    }

    cout << uppercaseCount << " " << uppercaseChars << endl;
    cout << lowercaseCount << " " << lowercaseChars << endl;

    return 0;
}
