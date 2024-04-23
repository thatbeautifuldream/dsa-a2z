#include <iostream>
using namespace std;

/*
Pattern 1
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

int pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


/*
*
* *
* * *
* * * *
* * * * *
*/

int pattern2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
int pattern3(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
int pattern4(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
* * * * *
* * * *
* * *
* *
*
*/
int pattern5(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
int pattern6(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + 1 - i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
   *
  ***
 *****
*******
*/

// spaces : n - i - 1
// stars : 2n - 1
void pattern7(int n){
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2*i - 1; j++){
            cout << "*";
        }
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

/*
*******
 *****
  ***
   *
*/
int pattern8(int n) {
  for(int i = 0; i < n; i++) {
    // spaces
    for(int j = 0; j < i; j++) {
      cout << " ";
    }
    // stars
    for (int j = 0; j < 2*(n - i) - 1; j++){
        cout << "*";
    }
    // spaces
    for(int j = 0; j < i; j++) {
      cout << " ";
    }
    cout << endl;
  }
  return 0;
}

int pattern9(int n) {
  pattern7(n);
  pattern8(n);
  return 0;
}



int main() {
    int n = 5;
    // cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    pattern9(n);
    return 0;
}
