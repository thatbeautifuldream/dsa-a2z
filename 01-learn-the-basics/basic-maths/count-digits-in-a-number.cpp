#include <iostream>
using namespace std;
// Problem Statement: Given an integer N, write a program to count the number of
// digits in N.

int digitsInNumber(long long number) {
  int numberOfDigits = 0;
  while (number > 0) {
    number = number / 10;
    numberOfDigits++;
  }
  return numberOfDigits;
}

// people use snake case in cpp
int better_count_digits(int n) {
  int digits = floor(log10(n) + 1);
  return digits;
}

int main() {
  cout << better_count_digits(123);
  return 0;
}
