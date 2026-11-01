#include <iostream>
#include <vector>
using namespace std;

int main(){

  /*
  MODULAR ARITHMETIC FOR DSA
  Modular Arithmetic is used to keep numbers small and avoid integer overflow.
  Most DSA problems use:
  
  MOD = 1e9 + 7 (1000000007)

  Why?
  1. It is a prime number.
  2. Prevents overflow.
  3. Required for Modular Inverse.
  4. Standard modulus used in Competitive Programming.

  // --------------------------------
  1. WHAT IS MODULO?
  Modulo (%) returns the remainder after division.
  
  Formula:
  Dividend = Divisor × Quotient + Remainder

  Example:
  17 = 5 × 3 + 2
  Therefore,
  17 % 5 = 2

  // ----------------------------
  2. WHY DO WE USE MODULO?
  Suppose:
  1000000000 * 1000000000
  This exceeds integer limits.
  Instead write:
  (a % MOD * b % MOD) % MOD
  This keeps numbers within range.

  // -------------------------------
  3. MODULAR ARITHMETIC PROPERTIES
  
  1. Addition

  (a + b) % MOD = ((a % MOD) + (b % MOD)) % MOD

  Example:
  (20 + 15) % 7
  35 % 7 = 0
  ((20 % 7) + (15 % 7)) % 7
  (6 + 1) % 7
  = 0

  2. Subtraction

  (a - b) % MOD = ((a % MOD) - (b % MOD) + MOD) % MOD

  Why +MOD?
  Because modulo cannot be negative.

  Example:
  5 - 8 = -3

  Correct answer:
  ((5 % 7) - (8 % 7) + 7) % 7
  = (5 - 1 + 7) % 7
  = 11 % 7
  = 4

  3. Multiplication
  (a * b) % MOD = ((a % MOD) * (b % MOD)) % MOD

  Example:
  20 × 15 = 300
  300 % 7 = 6
  ((20 % 7) * (15 % 7)) % 7
  (6 × 1) % 7
  = 6

  4. Division
  Normal division DOES NOT WORK.

  Wrong:
  (a / b) % MOD

  Correct:
  a × modular_inverse(b)

  // --------------------------------------------

  */


  
  return 0;
}