#include <iostream>
using namespace std;

int reverse_number(int n) {
  int reverse = 0;
  while (n > 0) {
    reverse = reverse * 10 + n % 10;
    n /= 10;
  }
  return reverse;
}

bool check_palindrome(int n) {
  if (n == reverse_number(n)) {
    return true;
  }
  return false;
}

int main() {
  bool is_palindrome = check_palindrome(123);
  if (is_palindrome)
    cout << "Yes";
  if (!is_palindrome)
    cout << "No";
}
