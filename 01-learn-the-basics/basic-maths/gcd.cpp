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

int gcd_better(int n1, int n2) {
  int gcd_value = 1;
  for (int i = min(n1, n2); i > 0; i--) {
    if ((n1 % i == 0) && (n2 % i == 0)) {
      return i;
    }
  }
  return 1;
}

int gcd_euclidian(int n1, int n2) {
  // euclid algo says that gcd(a,b) = gcd(a-b,b) given a > b
  while (n1 > 0 && n2 > 0) {
    if (n1 > n2) {
      n1 = n1 % n2;
    } else {
      n2 = n2 % n1;
    }
  }
  if (n1 == 0) {
    return n2;
  }
  return n1;
}

int main() {
  // cout << gcd_brute(3, 9);
  // cout << gcd_better(3, 9);
  cout << gcd_euclidian(3, 9);
  return 0;
}
