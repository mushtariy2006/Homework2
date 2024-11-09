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
            uppercaseChars += c;
            uppercaseChars += " ";
        } else if (islower(c)) {
            lowercaseCount++;
            lowercaseChars += c;
            lowercaseChars += " ";
        }
    }

    
    if (!uppercaseChars.empty()) uppercaseChars.pop_back();
    if (!lowercaseChars.empty()) lowercaseChars.pop_back();

    cout << uppercaseCount << " " << uppercaseChars << endl;
    cout << lowercaseCount << " " << lowercaseChars << endl;

    return 0;
}
