#include <iostream>
#include <vector>
using namespace std;

int sumEvenNumbers(vector<int> v){
   int i = 0, sum = 0;
   while (v[i] != -1){
       sum += ((v[i]%2) ? 0 : v[i]);
       i++;
   }
   return sum;
}

int longestConsecutiveSubsequence(vector<int> v){
   int i = 0, length = 0, llength = 0, number = -1;
   while (v[i] != -1){
       if(number != v[i]){
           length = 1;
           number = v[i];
       } else {
           length++;
           llength = max(llength, length);
       }
       i++;
   }
   return llength;
}


int main() {
   vector<int> v;
   int n;
   while (true) {
       cin>>n;
       v.push_back(n);
       if (n==-1) break;
   }
   cout << "Sum of even numbers: " << sumEvenNumbers(v) << endl;
   cout << "Length of longest consecutive subsequence: " << longestConsecutiveSubsequence(v) << endl;
