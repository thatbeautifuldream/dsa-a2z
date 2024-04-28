#include <iostream>
using namespace std;

int reverse_number(int n) {
  int temp = 0;
  while (n > 0) {
    temp = temp * 10 + n % 10;
    n /= 10;
  }
  return temp;
}

int main() {
  cout << reverse_number(1234);
  return 0;
}
