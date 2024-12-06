#include <iostream>
#include <vector>
using namespace std;

int findMax(int* array, int size) {
    int maxNum = -1;
    for (int i=0; i<size; i++) {
        maxNum = max(maxNum, *(array+i));
    }
    return maxNum;
}

int main() {
    vector<int> v;
    int n;
    while (true) {
        cin>>n;
        v.push_back(n);
        if (n==-1) break;
    }
    int array[v.size()];
    for(int i=0;i<v.size();i++) {
        array[i] = v[i];
    }
    cout << "Maximum value: " << findMax(array, v.size());
