#ifndef PROBLEMS_H
#define PROBLEMS_H

// Function to convert days to years
void days2years(int &days, int &years) {
    years = days / 365; // Calculate the number of complete years
    days = days % 365;  // Update days to the remaining days
}

#endif // PROBLEMS_H
//problem2
#include <cmath>  // For power function (pow)

// Function to calculate y = (11 * x^3) / 3 + 5
// Takes pointers to double values x and y
double func(double *x, double *y) {
    // Calculate the value of y based on the equation
    *y = (11 * pow(*x, 3)) / 3 + 5;
    return *y;
}
//problem3
// Function to calculate the number of minutes before New Year
int minsNewYear(int *hour, int *min) {
    // Total minutes in a day is 1440 (24 * 60)
    int totalMinutesInDay = 1440;

    // Calculate the minutes passed so far since midnight
    int minutesPassed = (*hour) * 60 + (*min);

    // Calculate the remaining minutes before the New Year
    return totalMinutesInDay - minutesPassed;
}
//problem4
double probability(int *A, int *B) {
    int aliRoll = *A; // Ali's roll
    int bekRoll = *B; // Bek's roll

    // Count the number of winning rolls for Dilya
    int winningRolls = 0;

    // Dilya can roll from 1 to 6
    for (int dilyaRoll = 1; dilyaRoll <= 6; ++dilyaRoll) {
        // Dilya wins if her roll is greater than either Ali's or Bek's,
        // or if Dilya ties with either Ali or Bek
        if (dilyaRoll >= aliRoll || dilyaRoll >= bekRoll) {
            winningRolls++;
        }
    }

    // Probability is the number of winning rolls divided by the total possible rolls (6)
    return static_cast<double>(winningRolls) / 6.0;
}
int presses(int *x) {
    int apartmentNumber = *x; // Get the apartment number
    int digit = apartmentNumber % 10; // Extract the digit (since x consists of identical digits)
    int length = 0; // Length of the apartment number
    int totalKeypresses = 0; // Total keypresses

    // Calculate the length of the apartment number
    while (apartmentNumber > 0) {
        apartmentNumber /= 10;
        length++;
    }

    // Count the keypresses for previous digits
    for (int i = 1; i < digit; ++i) {
        // For each digit from 1 to (digit - 1), we call 1, 11, 111, 1111
        totalKeypresses += (i * 4); // 1 + 2 + 3 + 4 = 10 key presses for each digit
    }

    // Count the keypresses for the current digit
    totalKeypresses += (length * digit); // For digit 'digit', adds keypresses for 1, 11, ..., and the current number

    return totalKeypresses;
}
