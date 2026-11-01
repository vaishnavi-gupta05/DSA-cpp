#include <iostream>
using namespace std;

/*
Question:
Given three integers x, n, and M, compute (x^n) % M.

Approach:
Binary Exponentiation + Modular Arithmetic

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
  int powMod(int x, int n, int M) {

    long long ans = 1;

    while (n > 0) {
      if (n & 1){
        ans = (1LL * ans * x) % M;
      }

      x = (1LL * x * x) % M;
      n >>= 1;
    }

    return ans;
  }
};