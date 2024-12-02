#ifndef PROBLEMS_H
#define PROBLEMS_H

#include <vector>

void delete11(std::vector<int> &v) {
  
    v.erase(std::remove_if(v.begin(), v.end(), [](int x) { return x % 11 == 0; }), v.end());
}

#endif // PROBLEMS_H
//problem2
void insertMany(vector<int>& v, int a, int b) {
    // Insert the number 'b' into the middle 'a' times
    for (int i = 0; i < a; ++i) {
        // Calculate the middle position
        int middle = (v.size() % 2 == 0) ? v.size() / 2 : (v.size() / 2) + 1;

        // Insert the number 'b' at the middle position
        v.insert(v.begin() + middle, b);
    }
}

//problem3
int* allocateAndSet(int a, int b) {
    // Check if a > b and return nullptr
    if (a > b) {
        return nullptr;
    }

    // Calculate the size of the array (from a to b inclusive)
    int size = b - a + 1;

    // Allocate memory for the array
    int* arr = new int[size];

    // Assign values in the range [a, b] to the array
    for (int i = 0; i < size; ++i) {
        arr[i] = a + i;
    }

    return arr;
}

// Function to deallocate memory and set pointer to nullptr
void deallocate(int* arr) {
    if (arr != nullptr) {
        delete[] arr;  // Free the dynamically allocated memory
        arr = nullptr; // Set the pointer to nullptr
    }
}

//problem4
int* reallocate(int* arr, int N, int n) {

    int* newArr = new int[N - n];

    for (int i = 0; i < N - n; ++i) {
        newArr[i] = arr[i + n];
    }

    return newArr;
}

int** transposed(int** arr, int n, int m) {
    
    int** transposed = new int*[m]; 
    for (int i = 0; i < m; ++i) {
        transposed[i] = new int[n]; 
    }
    
   
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transposed[j][i] = arr[i][j];
        }
    }
    
  
    return transposed;
}
