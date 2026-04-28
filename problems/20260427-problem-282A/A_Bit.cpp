#include "iostream"

using namespace std;

// https://codeforces.com/problemset/problem/282/A
int main() {
  int n;
  cin >> n;

  int x = 0;

  string operation;

  for (int i = 0; i < n; i++) {
    cin >> operation;

    if (operation.at(0) == '+' || operation.at(2) == '+') {
      x++;
    } else {
      x--;
    }
  }

  cout << x;

  return 0;
}