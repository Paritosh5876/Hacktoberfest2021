#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin >> n; // Taking input from the user.

   cout << n; // printing given number
   while(n) // This while loop will print the number in rever
   {
      cout << n % 10; // Example n = 10. In first iteration n % 10 = 0,
      n = n/ 10; // in second iteration n = 1, now our n % 10 = 1 so output
      will be 01.
   }
}
