#include "iostream"
#include "vector"

using namespace std;

// https://codeforces.com/problemset/problem/158/A
int main() {
  int n, k;
  cin >> n >> k;

  int score = 0;
  int numberOfAdavances = 0;

  vector<int> scores(n);

  for (int i = 0; i < n; i++) {
    cin >> scores[i];
  }

  int threshold = scores[k - 1];

  for (int i = 0; i < n; i++) {
    if (scores[i] == 0 or scores[i] < threshold)
      break;

    numberOfAdavances++;
  }

  cout << numberOfAdavances;

  return 0;
}