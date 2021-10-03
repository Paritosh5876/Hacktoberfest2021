#include <bits/stdc++.h>
using namespace std;
bool isSteppingNumber(int n) {
   int previousDigit = -1;
   while (n) {
      int currentDigit = n % 10;
      if (previousDigit != -1 && abs(previousDigit - currentDigit) != 1) {
         return false;
      }
      previousDigit = currentDigit;
      n /= 10;
   }
   return true;
}
int getSteppingNumbersCount(int n) {
   int lowestNumber = pow(10, n - 1), highestNumber = pow(10, n) - 1;
   int count = 0;
   for (int i = lowestNumber; i <= highestNumber; i++) {
      if (isSteppingNumber(i)) {
         count += 1;
      }
   }
   return count;
}
int main() {
   int n = 3;
   cout << getSteppingNumbersCount(n) << endl;
   return 0;
}
