#include <iostream>
using namespace std;

void pairExample() {
  pair<int, int> p = {1, 3};
  cout << p.first << " " << p.second << endl;
  pair<int, pair<int, int>> p2 = {1, {2, 3}};
  cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
  for (int i = 0; i < 3; i++) {
    cout << arr[i].first << " " << arr[i].second << endl;
  }
}

#include <vector> // Include the necessary header file

void vectorExample() {
  vector<int> v;

  v.push_back(1); // Adds an element to the end of the vector and increases the size by 1 
  v.emplace_back(2); // faster than push_back as it constructs the object in place

  vector<pair<int, int>> v_p;
  v_p.push_back({1, 2}); // need to pass in the pair object
  v_p.emplace_back(3, 4); // auto constructs the pair object

  cout << v[0] << " " << v[1] << endl;

  vector<int> v_five_hundreds (5, 100);
  for (int i = 0; i < v_five_hundreds.size(); i++) {
    cout << v_five_hundreds[i] << " ";
  }

  // copy vector to a new vector
  vector<int> v2(v_five_hundreds);

  vector<int> v3(2);
  v3[0] = 1;
  v3[1] = 2;
  v3.emplace_back(3);

  cout << v3[2] << endl;
  cout << v3.size() << endl;
}

int main() {
  // pairExample();
  vectorExample();
  return 0;
}
