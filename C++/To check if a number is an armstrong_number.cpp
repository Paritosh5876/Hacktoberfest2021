// Program to check whether a number is an armstrong number or not
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, d, s = 0;
  cout << "Enter a number:";
  cin >> n;
  k = n;
  while (k != 0) {
    d = k % 10;
    s += d * d * d;
    k /= 10;
  }
  if (s == n)
    cout << n << "is an armstrong number";
  else
    cout << n << "is not an armstrong number";
}
