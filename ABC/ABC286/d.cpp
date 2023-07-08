#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, x;
  cin >> n >> x;

  vector<vector<int>> d(n, vector<int>(2));
  rep(i, 0, n) { cin >> d[i][0] >> d[i][1]; }

  vector<vector<int>> dp(n + 1, vector<int>(x + 1));

  int c, m, l;

  c = d[0][0];
  m = d[0][1];
  l = min(x, c * m);
  for (int j = 0; j <= l; j += c) {
    dp[0][j] = 1;
    // cout << "0 " << j << " " << endl;
  }
  // cout << endl;

  rep(i, 1, n) {
    c = d[i][0];
    m = d[i][1];
    rep(j, 0, x + 1) {
      if (dp[i - 1][j] == 1) {
        // cout << "hit: j = " << j << endl;
        l = min(x, j + c * m);
        for (int k = j; k <= l; k += c) {
          dp[i][k] = 1;

          // cout << i << " " << k << " " << endl;
        }
      }
    }
  }

  // cout << endl;

  // rep(i, 0, n) {
  //   rep(j, 0, x + 1) { cout << dp[i][j] << " "; }
  //   cout << endl;
  // }

  if (dp[n - 1][x] == 1) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
