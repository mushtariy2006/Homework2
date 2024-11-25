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
#include <algorithm>  // for max function
using namespace std;

double probability(int *A, int *B) {
    // Find the maximum value between Ali's and Bek's rolls
    int maxRoll = max(*A, *B);
    
    // Count how many possible outcomes for Dilya's roll will result in her win
    int favorableOutcomes = 6 - maxRoll + 1;
    
    // If favorableOutcomes is negative, set it to 0 (can't have negative favorable outcomes)
    if (favorableOutcomes < 0) {
        favorableOutcomes = 0;
    }
    
    // The total number of outcomes for Dilya is 6 (since it's a six-sided die)
    double totalOutcomes = 6.0;
    
    // Return the probability of Dilya winning
    return favorableOutcomes / totalOutcomes;
}

int presses(int *x) {
    // Convert x to string to extract digit and length
    int n = *x;
    int digit = n % 10;  // Last digit (since x is a "special" number, it's the repeated digit)
    int length = 0;
    
    // Find the length of the number (count how many times the digit repeats)
    int temp = n;
    while (temp > 0) {
        length++;
        temp /= 10;
    }
    
    int totalKeypresses = 0;

    // Calculate keypresses for all digits from 1 to digit-1
    for (int d = 1; d < digit; ++d) {
        for (int len = 1; len <= 4; ++len) {
            totalKeypresses += len;  // Each "d...d" requires len keypresses
        }
    }

    // Calculate keypresses for the current digit
    for (int len = 1; len < length; ++len) {
        totalKeypresses += len;  // For numbers like 2, 22, 222, ... before 2222
    }

    // Finally add keypresses for the apartment x itself
    totalKeypresses += length;  // For the apartment `x` itself
    
    return totalKeypresses;
}
