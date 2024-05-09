#include <iostream>
using namespace std;

int gcd_brute(int n1, int n2) {
  int gcd_value = 1;
  int min_of_both = min(n1, n2);
  for (int i = gcd_value; i <= min_of_both; i++) {
    if ((n1 % i == 0) && (n2 % i == 0)) {
      gcd_value = i;
    }
  }
  return gcd_value;
}

int main() {
  cout << gcd_brute(3, 9);
  return 0;
}
