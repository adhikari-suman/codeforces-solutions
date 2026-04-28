#include "iostream"

using namespace std;

// https://codeforces.com/problemset/problem/50/A
int main() {
  int m, n;

  cin >> m >> n;

  int boardSize = m * n;

  int dominoSize = 2;

  cout << boardSize / dominoSize;

  return 0;
}
