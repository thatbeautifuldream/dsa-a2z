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

int main() {
  cout << digitsInNumber(123);
  return 0;
}
