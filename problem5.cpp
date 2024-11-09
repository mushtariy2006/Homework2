#include <iostream>
#include <cstring>  // for strlen
using namespace std;

int main() {
    char s[1000];  // Assume the maximum length of the input string is 999 characters
    cin.getline(s, 1000);  // Read the input string

    int uppercaseCount = 0, lowercaseCount = 0;
    char uppercaseChars[1000] = "";  // Array to store uppercase characters
    char lowercaseChars[1000] = "";  // Array to store lowercase characters

    int uppercaseIndex = 0, lowercaseIndex = 0;

    // Loop through the string and classify characters
    for (int i = 0; i < strlen(s); i++) {
        if (isupper(s[i])) {
            uppercaseCount++;
            uppercaseChars[uppercaseIndex++] = s[i];
            uppercaseChars[uppercaseIndex++] = ' ';  // Add a space after the character
        } else if (islower(s[i])) {
            lowercaseCount++;
            lowercaseChars[lowercaseIndex++] = s[i];
            lowercaseChars[lowercaseIndex++] = ' ';  // Add a space after the character
        }
    }

    // Null-terminate the arrays to print them correctly
    if (uppercaseIndex > 0) uppercaseChars[uppercaseIndex - 1] = '\0';  // Remove last space for uppercase
    if (lowercaseIndex > 0) lowercaseChars[lowercaseIndex - 1] = '\0';  // Remove last space for lowercase

    // Print results
    cout<<uppercaseCount<<" "<< uppercaseChars<<endl;
    cout<<lowercaseCoun<<" "<<lowercaseChars<<endl;

    return 0;
}
