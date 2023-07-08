#include <iostream>
#include <vector>
using namespace std;

int main() {
  // 初期化と値の受け取り
  int n, x;
  cin >> n >> x;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i] >> b[i];
  }

  vector dp(n + 1, vector(x + 1, false));
  dp[0][0] = true;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= x; ++j) {
      if (dp[i][j]) {
        if (j + a[i] <= x) {
          dp[i + 1][j + a[i]] = true;
        }
        if (j + b[i] <= x) {
          dp[i + 1][j + b[i]] = true;
        }
      }
    }
  }
  cout << (dp[n][x] ? "Yes" : "No") << '\n';
}
