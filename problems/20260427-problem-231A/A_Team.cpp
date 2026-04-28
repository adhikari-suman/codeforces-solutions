#include "iostream"

// https://codeforces.com/problemset/problem/231/A
using namespace std;

int main() {
  int n = 0;

  cin >> n;

  int petya = 0, vasya = 0, tanya = 0;
  int numberOfSolutions = 0;

  for (int i = 0; i < n; i++) {
    cin >> petya >> vasya >> tanya;

    if (petya + vasya + tanya >= 2) {
      numberOfSolutions++;
    }
  }

  cout << numberOfSolutions;

  return 0;
}