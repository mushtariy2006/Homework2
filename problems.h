#ifndef PROBLEMS_H
#define PROBLEMS_H

#include <vector>

void delete11(std::vector<int> &v) {
  
    v.erase(std::remove_if(v.begin(), v.end(), [](int x) { return x % 11 == 0; }), v.end());
}

#endif // PROBLEMS_H
//problem2
int* allocateAndSet(int a, int b) {
    
    if (a > b) {
        return nullptr; 
    }

    
    int size = b - a + 1;

   
    int* arr = new int[size];

   
    for (int i = 0; i < size; ++i) {
        arr[i] = a + i;
    }

    return arr; 
}

void deallocate(int*& arr) {
   
    if (arr != nullptr) {
        delete[] arr; 
        arr = nullptr; 
    }
}

//problem3
int* allocateAndSet(int a, int b) {

    if (a > b) {
        return nullptr; // 
    }

   
    int size = b - a + 1;

  
    int* arr = new int[size];


    for (int i = 0; i < size; ++i) {
        arr[i] = a + i;
    }

    return arr; 
}

void deallocate(int*& arr) {

    if (arr != nullptr) {
        delete[] arr; 
        arr = nullptr; 
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
