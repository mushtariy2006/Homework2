#ifndef PROBLEMS_H
#define PROBLEMS_H

#include <vector>

void delete11(std::vector<int> &v) {
    // Use the erase-remove idiom to remove elements divisible by 11
    v.erase(std::remove_if(v.begin(), v.end(), [](int x) { return x % 11 == 0; }), v.end());
}

#endif // PROBLEMS_H
//problem2
int* allocateAndSet(int a, int b) {
    // Check if a is greater than b
    if (a > b) {
        return nullptr; // Return NULL if invalid range
    }

    // Calculate the size of the array
    int size = b - a + 1;

    // Allocate memory for the array
    int* arr = new int[size];

    // Assign values from a to b
    for (int i = 0; i < size; ++i) {
        arr[i] = a + i;
    }

    return arr; // Return pointer to the allocated array
}

void deallocate(int*& arr) {
    // Check if the pointer is not null
    if (arr != nullptr) {
        delete[] arr; // Deallocate the memory
        arr = nullptr; // Set the pointer to nullptr
    }
}

//problem3
int* allocateAndSet(int a, int b) {
    // Check if a is greater than b
    if (a > b) {
        return nullptr; // Return NULL if invalid range
    }

    // Calculate the size of the array
    int size = b - a + 1;

    // Allocate memory for the array
    int* arr = new int[size];

    // Assign values from a to b
    for (int i = 0; i < size; ++i) {
        arr[i] = a + i;
    }

    return arr; // Return pointer to the allocated array
}

void deallocate(int*& arr) {
    // Check if the pointer is not null
    if (arr != nullptr) {
        delete[] arr; // Deallocate the memory
        arr = nullptr; // Set the pointer to nullptr
    }
}

//problem4
int* reallocate(int* arr, int N, int n) {
    // Allocate new memory for the resized array of size N-n
    int* newArr = new int[N - n];

    // Copy elements from arr[n] to arr[N-1] to newArr
    for (int i = 0; i < N - n; ++i) {
        newArr[i] = arr[i + n];
    }

    // Return the pointer to the new array
    return newArr;
}
//problem5

int** transposed(int** arr, int n, int m) {
    // Dynamically allocate memory for the transposed matrix
    int** transposed = new int*[m]; // m rows in the transposed matrix
    for (int i = 0; i < m; ++i) {
        transposed[i] = new int[n]; // n columns in the transposed matrix
    }
    
    // Perform the transposition: arr[i][j] -> transposed[j][i]
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transposed[j][i] = arr[i][j];
        }
    }
    
    // Return the pointer to the transposed matrix
    return transposed;
}
