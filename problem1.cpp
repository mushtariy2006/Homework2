#include <iostream>
using namespace std;



int main() {
   int a;
   cin >> a;
   for(int i=2; i<((a+1)/2); i++){
       if (a%i) continue;
       cout << "Not Prime";
       return 0;
   }
   cout << "Prime";
