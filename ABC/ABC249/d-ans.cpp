#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 200000;

int main() {
  int n;
  cin >> n;
  vector<int> c(MAX + 1);
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    c[x] += 1;
  }
  long long ans = 0;
  for (int q = 1; q <= MAX; ++q) {
    for (int r = 1; q * r <= MAX; ++r) {
      ans += (long long)c[q] * c[r] * c[q * r];
    }
  }
  cout << ans << '\n';
  return 0;
}

10 1 2 2 2 3 3 4 6 7 8

    8